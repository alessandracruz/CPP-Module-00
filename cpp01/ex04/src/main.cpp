/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:37:04 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/01 22:33:06 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "utils.hpp"

int main(int argc, char* argv[]) {
    if (!areArgsValid(argc, argv)) {
        return 1;
    }

    std::string filename = argv[1];
    std::string searchStr = argv[2];
    std::string replaceStr = argv[3];

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open()) {
        std::cerr << "Could not open file " << filename << std::endl;
        return 1;
    }

    if (isFileEmpty(inFile)) {
        std::cerr << "File is empty: " << filename << std::endl;
        return 1;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outFile(outputFilename.c_str());
    if (!outFile.is_open()) {
        std::cerr << "Could not open file " << outputFilename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(searchStr, pos)) != std::string::npos) {
            line.replace(pos, searchStr.length(), replaceStr);
            pos += replaceStr.length();
        }
        outFile << line << std::endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}


