/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:17:48 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/20 20:21:29 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_uppercase(char *str)
{
    while (*str)
    {
        std::cout << (char)std::toupper(*str);
        ++str;
    }
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        int i = 1;
        while (i < argc)
        {
            print_uppercase(argv[i]);
            ++i;
        }
    }
    std::cout << std::endl;
    return (0);
}