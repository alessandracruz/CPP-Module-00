/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:56:50 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/19 17:05:44 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        materia[i] = NULL; // Use NULL instead of nullptr
    }
    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < 4; ++i) {
        if (other.materia[i])
            materia[i] = other.materia[i]->clone();
        else
            materia[i] = NULL; // Use NULL instead of nullptr
    }
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        delete materia[i];
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete materia[i];
            if (other.materia[i])
                materia[i] = other.materia[i]->clone();
            else
                materia[i] = NULL; // Use NULL instead of nullptr
        }
    }
    std::cout << "MateriaSource copy assignment operator called" << std::endl;
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!materia[i]) {
            materia[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i) {
        if (materia[i] && materia[i]->getType() == type) {
            return materia[i]->clone();
        }
    }
    return NULL; // Use NULL instead of nullptr
}
