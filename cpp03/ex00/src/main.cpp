/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:41:26 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/19 11:41:28 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("CL4P-TP");

    claptrap.attack("target1");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.attack("target2");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    return 0;
}
