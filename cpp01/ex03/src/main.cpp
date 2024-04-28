/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:02:43 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/28 18:02:54 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    {
        // Criação da arma e do humano tipo A
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();  // Bob attacks with their crude spiked club
        club.setType("some other type of club");  // Mudando o tipo da arma
        bob.attack();  // Bob attacks with their some other type of club
    }

    {
        // Criação do humano tipo B
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();  // Jim has no weapon to attack with.
        jim.setWeapon(club);
        jim.attack();  // Jim attacks with their crude spiked club
        club.setType("some other type of club");  // Mudando o tipo da arma
        jim.attack();  // Jim attacks with their some other type of club
    }

    return 0;
}
