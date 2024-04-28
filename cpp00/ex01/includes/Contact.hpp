/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:24:55 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/27 18:15:18 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

  public:
	Contact();
	void set_details(const std::string &fn, const std::string &ln,
		const std::string &nn, const std::string &pn, const std::string &ds);
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_number() const;
	std::string get_darkest_secret() const;
	void set_first_name(const std::string &fn);
    void set_last_name(const std::string &ln);
    void set_nickname(const std::string &nn);
    void set_phone_number(const std::string &pn);
    void set_darkest_secret(const std::string &ds);
};

#endif
