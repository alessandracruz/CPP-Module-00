/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:28:23 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/27 18:15:42 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include "Contact.hpp"

void clearCin();
bool validatePhoneNumber(const std::string &input);
bool validateName(const std::string &input);
bool getInput(std::string &input, const std::string &prompt, const std::string &type);
std::string toUpperCase(const std::string &str);
bool getValidCommand(std::string &command);

#endif


