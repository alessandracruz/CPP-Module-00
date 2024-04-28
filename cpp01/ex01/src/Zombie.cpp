/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:49:08 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/28 16:08:37 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Zombie.cpp
#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Esta é a implementação correta.
void Zombie::setName(const std::string& name) {
    this->name = name;
}


