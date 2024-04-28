/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:18:36 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/27 20:36:39 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
  private:
    Contact contacts[8];
    int current_index;   
    int contact_count;  

  public:
	PhoneBook();
    void add_contact(const Contact &contact);
    void display_contacts() const;
    void display_contact_details(int index) const;
    std::string truncate(const std::string& str, size_t width) const;
    int get_contact_count() const; 
};

#endif
