/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:18:36 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/27 18:02:01 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
  private:
private:
    Contact contacts[8];
    int current_index;   // Índice atual para inserção de novo contato
    int contact_count;   // Total de contatos adicionados

  public:
	PhoneBook() : current_index(0), contact_count(0) {}
	void add_contact(const Contact &contact);
	void display_contacts() const;
	void display_contact_details(int index) const;
    std::string truncate(const std::string& str, size_t width) const;
	int get_contact_count() const; 
};

#endif // PHONEBOOK_HPP
