/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:51:47 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/28 15:54:34 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// zombieHorde.cpp
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];
    int i = 0;
    while (i < N) {
        horde[i].setName(name);
        i++;  // Incrementar o índice manualmente
    }
    return horde;
}
