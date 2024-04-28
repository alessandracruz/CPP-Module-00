/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:29:20 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/28 13:29:31 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// newZombie.cpp
#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
