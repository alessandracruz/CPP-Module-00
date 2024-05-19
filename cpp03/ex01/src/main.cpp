/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:48:44 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/19 11:48:46 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("CL4P-TP");
    ScavTrap scavtrap("SC4V-TP");

    claptrap.attack("target1");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.attack("target2");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    scavtrap.attack("target3");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    return 0;
}
