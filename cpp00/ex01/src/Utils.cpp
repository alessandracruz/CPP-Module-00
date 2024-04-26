/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:31:29 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/25 21:58:26 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include <iostream>
#include <limits>
#include <cctype>
#include <algorithm>

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
    // Limpar qualquer newline pendente no buffer antes de ler a próxima entrada
    if (std::cin.peek() == '\n') {
        std::cin.ignore();
    }
    std::getline(std::cin, input); // Agora lê a entrada

    if (input.empty()) {
        std::cout << "Invalid input: field cannot be empty." << std::endl;
        return false;
    }
    if (type == "name" && !validateName(input)) {
        std::cout << "Invalid input: name contains invalid characters." << std::endl;
        return false;
    }
    if (type == "phone" && !validatePhoneNumber(input)) {
        std::cout << "Invalid input: phone number must be numeric." << std::endl;
        return false;
    }
    return true;
}

// Função para converter strings para maiúsculas
struct to_upper {
    char operator()(char c) {
        return std::toupper(static_cast<unsigned char>(c));
    }
};

std::string toUpperCase(const std::string &str) {
    std::string upperCaseStr = str;
    std::transform(upperCaseStr.begin(), upperCaseStr.end(), upperCaseStr.begin(), to_upper());
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
