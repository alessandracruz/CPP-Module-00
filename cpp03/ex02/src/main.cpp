/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 12:34:23 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/19 12:34:25 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap claptrap("CL4P-TP");
    ScavTrap scavtrap("SC4V-TP");
    FragTrap fragtrap("FR4G-TP");

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

    fragtrap.attack("target4");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(15);
    fragtrap.highFivesGuys();

    return 0;
}
