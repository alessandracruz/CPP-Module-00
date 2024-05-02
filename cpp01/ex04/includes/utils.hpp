/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:01:17 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/01 21:49:51 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <fstream>

bool areArgsValid(int argc, char* argv[]);
bool isFileEmpty(std::ifstream& inFile);

#endif // UTILS_HPP
