/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:37:04 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/18 17:47:58 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string readArchive(std::string file_name)
{
    std::ifstream file;
    std::string fileContent;

    file.open(file_name.c_str());
    if(!file.is_open())
    {
        std::cerr << "Esse arquivo não existe, ou não tenho permissão para ler!" << std::endl;
        return "";
    }
    else{
        std::string buff;
        while (std::getline(file, buff)){
            fileContent += buff;
            if (!file.eof())
                fileContent += "\n";
        }
        file.close();
        if (fileContent.empty())
        {
            std::cerr << "O Arquivo não pode estar vazio!" << std::endl;
            return "";
        }
        else
            return fileContent;
    
    }
    return (0);
}

void   myReplace(std::string& str, const std::string& s1, const std::string& s2, std::ofstream& output_file )
{
    size_t position = 0;
    std::string before = "";
    std::string after = "";
    while ((position = str.find(s1, position)) != std::string::npos)
    {
        before = str.substr(0, position);
        after = str.substr(position + s1.length());
        str = before + s2 + after;
        position += s2.length();
    }
    output_file << str;
    output_file.close();
}

int checkParameters(std::string file_name, std::string s1, std::string s2)
{
    if (file_name.empty() || s1.empty() || s2.empty())
    {
        std::cerr << "Os parâmetros não podem estar vazios!!" << std::endl;
        return (1);
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::string s1, s2, file_name, replace, fileContent, outFileName;
        
        file_name = argv[1];
        outFileName = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        outFileName.append(".replace");

        if (checkParameters(file_name, s1, s2))
            return 1;

        fileContent = readArchive(file_name);
        
        if (fileContent.empty())
            return 1;

        std::ofstream outFile(outFileName.c_str());

        if (outFile.fail())
        {
            std::cerr << "Arquivo de saída não pode ser aberto!\n";
            return (1);
        }
        myReplace(fileContent, s1, s2, outFile);
    }
    else{
        std::cout << "Argumentos: <nome_do_Arquivo> <string_1> <string_2>" << std::endl;
    }
}

