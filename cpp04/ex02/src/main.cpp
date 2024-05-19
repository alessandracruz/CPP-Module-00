/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:52:53 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/19 16:52:54 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Chase the ball");
    Dog copyDog = originalDog;
    std::cout << "Original Dog Brain Idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog Brain Idea: " << copyDog.getBrain()->getIdea(0) << std::endl;

    Cat originalCat;
    originalCat.getBrain()->setIdea(0, "Catch the mouse");
    Cat copyCat = originalCat;
    std::cout << "Original Cat Brain Idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Cat Brain Idea: " << copyCat.getBrain()->getIdea(0) << std::endl;

    return 0;
}
