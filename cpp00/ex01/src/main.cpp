/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:45:17 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/27 18:28:36 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Utils.hpp"
#include <iostream>
#include <limits>

void addContact(PhoneBook& phonebook) {
    Contact new_contact;
    std::string input;

    if (!getInput(input, "Enter first name: ", "name")) {
        std::cout << "Failed to add new contact." << std::endl;
        return;
    }
    new_contact.set_first_name(input);

    if (!getInput(input, "Enter last name: ", "name")) {
        std::cout << "Failed to add new contact." << std::endl;
        return;
    }
    new_contact.set_last_name(input);

    if (!getInput(input, "Enter nickname: ", "name")) {
        std::cout << "Failed to add new contact." << std::endl;
        return;
    }
    new_contact.set_nickname(input);

    if (!getInput(input, "Enter phone number: ", "phone")) {
        std::cout << "Failed to add new contact." << std::endl;
        return;
    }
    new_contact.set_phone_number(input);

    if (!getInput(input, "Enter darkest secret: ", "secret")) {
        std::cout << "Failed to add new contact." << std::endl;
        return;
    }
    new_contact.set_darkest_secret(input);

    phonebook.add_contact(new_contact);
    std::cout << "Contact added successfully!" << std::endl;
}

void searchContact(const PhoneBook& phonebook) {
    if (phonebook.get_contact_count() == 0) {
        std::cout << "The phonebook is empty." << std::endl;
        return;
    }

    phonebook.display_contacts(); 

    std::cout << "Enter the index of the contact to display details: ";
    int index;
    std::cin >> index;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a numeric index." << std::endl;
        return;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    if (index < 1 || index > phonebook.get_contact_count()) {
        std::cout << "Invalid index. Please enter a number between 1 and " 
                  << phonebook.get_contact_count() << "." << std::endl;
        return;
    }
    phonebook.display_contact_details(index - 1);
}

int main() {
    PhoneBook phonebook;
    std::string command;

    while (true) {
        if (!getValidCommand(command)) {
            continue; 
        }
        if (command == "EXIT") {
            std::cout << "Exiting phonebook..." << std::endl;
            break;
        } else if (command == "ADD") {
            addContact(phonebook);
        } else if (command == "SEARCH") {
            searchContact(phonebook);
        }
    }
    return 0;
}
