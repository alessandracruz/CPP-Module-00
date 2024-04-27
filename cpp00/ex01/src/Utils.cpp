/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:31:29 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/27 17:43:35 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include <iostream>
#include <limits>
#include <cctype>

void clearCin() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool validatePhoneNumber(const std::string &input) {
    for (size_t i = 0; i < input.length(); ++i) {
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}

bool validateName(const std::string &input) {
    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];
        if (!isalpha(c) && c != ' ' && c != '-')
            return false;
    }
    return true;
}

bool getInput(std::string &input, const std::string &prompt, const std::string &type) {
    std::cout << prompt;
    while (true) {
        std::getline(std::cin, input);  // Lê a entrada
        if (std::cin.eof() || std::cin.fail()) {
            std::cin.clear();  // Limpa os flags de erro
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignora o restante da linha
            return false;
        }
        if (!input.empty()) {  // Se a entrada não estiver vazia, verifica seu conteúdo
            if (type == "name" && !validateName(input)) {
                std::cout << "Invalid input: name contains invalid characters.\n";
            } else if (type == "phone" && !validatePhoneNumber(input)) {
                std::cout << "Invalid input: phone number must be numeric.\n";
            } else {
                return true;  // Validação bem-sucedida
            }
        }
        std::cout << "Invalid input: field cannot be empty.\n" << prompt;  // Solicita novamente no caso de entrada vazia
    }
}

std::string toUpperCase(const std::string &str) {
    std::string upperCaseStr = str;  // Cria uma cópia da string original
    for (size_t i = 0; i < upperCaseStr.length(); ++i) {
        upperCaseStr[i] = std::toupper(static_cast<unsigned char>(upperCaseStr[i]));  // Converte cada caractere para maiúsculo
    }
    return upperCaseStr;
}

// Função para validar e corrigir a entrada de comandos
bool getValidCommand(std::string &command) {
    std::cout << "Enter command (ADD, SEARCH, EXIT): ";
    std::getline(std::cin, command);
    command = toUpperCase(command);
    if (command == "ADD" || command == "SEARCH" || command == "EXIT") {
        return true;
    } else {
        std::cout << "Invalid command. Please enter a valid command: ADD, SEARCH, or EXIT.\n";
        return false;
    }
}
