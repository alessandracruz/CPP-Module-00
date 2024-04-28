/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:30:04 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/28 13:30:09 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// randomChump.cpp
#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie chump(name);
    chump.announce();
}
