/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:55:54 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/27 18:26:46 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickname(""),
	phone_number(""), darkest_secret("") {}

void Contact::set_details(const std::string &fn, const std::string &ln,
	const std::string &nn, const std::string &pn, const std::string &ds) {
	first_name = fn;
	last_name = ln;
	nickname = nn;
	phone_number = pn;
	darkest_secret = ds;
}

std::string Contact::get_first_name() const {
	return (first_name);
}

std::string Contact::get_last_name() const {
	return (last_name);
}

std::string Contact::get_nickname() const {
	return (nickname);
}

std::string Contact::get_phone_number() const {
	return (phone_number);
}

std::string Contact::get_darkest_secret() const {
	return (darkest_secret);
}

void Contact::set_first_name(const std::string &fn) {
    first_name = fn;
}

void Contact::set_last_name(const std::string &ln) {
    last_name = ln;
}

void Contact::set_nickname(const std::string &nn) {
    nickname = nn;
}

void Contact::set_phone_number(const std::string &pn) {
    phone_number = pn;
}

void Contact::set_darkest_secret(const std::string &ds) {
    darkest_secret = ds;
}
