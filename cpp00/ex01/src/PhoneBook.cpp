/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:54:44 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/25 21:46:18 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip> // Para std::setw e std::setfill
#include <iostream>

PhoneBook::PhoneBook() : current_index(0), contact_count(0)
{
	// Inicializa os contatos como vazios ou define um estado inicial adequado
}

void PhoneBook::add_contact(const Contact& contact)
{
	int	index;

	index = contact_count % 8;
	// Determina o índice para inserção/substituição
	contacts[index] = contact;
	if (contact_count < 8)
	{
		contact_count++;
		// Aumenta o contador total de contatos apenas se for menor que 8
	}
	else
	{
		current_index = (current_index + 1) % 8;
		// Atualiza o índice do contato mais antigo
	}
}

void PhoneBook::display_contacts() const
{
	std::cout << std::setw(10) << "Index"
				<< "|" << std::setw(10) << "First Name"
				<< "|" << std::setw(10) << "Last Name"
				<< "|" << std::setw(10) << "Nickname" << std::endl;
	int i = 0;
	while (i < contact_count)
	{
        std::cout << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << std::right 
                  << truncate(contacts[i].get_first_name(), 10) << "|"
                  << std::setw(10) << std::right 
                  << truncate(contacts[i].get_last_name(), 10) << "|"
                  << std::setw(10) << std::right 
                  << truncate(contacts[i].get_nickname(), 10) << std::endl;
        i++;
    }
}

void PhoneBook::display_contact_details(int index) const
{
	if (index < 0 || index >= contact_count)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	const Contact &contact = contacts[index];
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
}

int PhoneBook::get_contact_count() const
{
    return contact_count;
}

std::string PhoneBook::truncate(const std::string &str, size_t width) const
{
	if (str.length() > width)
	{
		return (str.substr(0, width - 1) + ".");
	}
	return (str);
}
