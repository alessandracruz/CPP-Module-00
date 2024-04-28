/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:27:10 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/28 13:27:13 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "Zombie.hpp"

int main() {
    // Cria um novo zumbi na heap
    Zombie* zombieHeap = newZombie("HeapZombie");
    zombieHeap->announce();

    // Lembre-se de deletar o zumbi para evitar vazamentos de memória
    delete zombieHeap;

    // Cria um zumbi na stack
    randomChump("StackZombie");

    // O zumbi da stack será destruído automaticamente ao sair do escopo

    return 0;
}
