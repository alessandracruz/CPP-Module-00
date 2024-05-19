/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:57:25 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/18 18:12:52 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    this->levels[0] = "DEBUG";
    this->levels[1] = "INFO";
    this->levels[2] = "WARNING";
    this->levels[3] = "ERROR";
    this->function[0] = &Harl::debug;
    this->function[1] = &Harl::info;
    this->function[2] = &Harl::warning;
    this->function[3] = &Harl::error;
}

Harl::~Harl(void)
{

}

void Harl::complain( std::string level)
{
    int i = 0;
    while (i < 4)
    {
        if (this->levels[i] == level)
            break ;
        i += 1;
    }
   
    switch (i)
    {
        case 0:
            (this->*function[0])();
            break;
        case 1:
            (this->*function[1])();
            break;
        case 2:
            (this->*function[2])();
            break;
        case 3:
            (this->*function[3])();
            break;
        default:
            std::cout << "O level não existe!" << std::endl;
            return;
    }

}

void Harl::debug( void)
{
    std::cout << "[DEBUG] I love having extra bacon for my "  << 
    "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void)
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money." << 
    " You didn't put enough bacon in my burger!" << "If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free." << 
    " I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}