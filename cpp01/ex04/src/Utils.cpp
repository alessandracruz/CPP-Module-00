/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:01:44 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/01 21:45:51 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool areArgsValid(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string to replace> <replacement string>" << std::endl;
        return false;
    }

    int i = 1;
    while (i < argc) {
        if (std::string(argv[i]).empty()) {
            std::cerr << "Error: None of the arguments can be empty." << std::endl;
            return false;
        }
        i++;
    }
    
    return true;
}

bool isFileEmpty(std::ifstream& inFile) {
    return inFile.peek() == std::ifstream::traits_type::eof();
}
