/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:52:45 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/19 16:52:46 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain()) {
    std::cout << "Cat() constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Cat(" << other.type << ") copy constructor called" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat(" << type << ") destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    std::cout << "Cat(" << other.type << ") copy assignment operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat makes sound: 'Meow'" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}
