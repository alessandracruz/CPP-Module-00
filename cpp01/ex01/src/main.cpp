/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:59:16 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/28 16:17:03 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "ZombieHordeMember");

    int i = 0;
    while (i < N) {
        horde[i].announce();
        i++;  // Incrementa o índice
    }

    // Libera a memória alocada
    delete[] horde;

    return 0;
}
