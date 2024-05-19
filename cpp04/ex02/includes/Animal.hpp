/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:52:03 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/19 16:52:04 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(const std::string& type);
    Animal(const Animal& other);
    virtual ~Animal();

    Animal& operator=(const Animal& other);

    std::string getType() const;
    virtual void makeSound() const = 0; // Método virtual puro, tornando Animal uma classe abstrata
};

#endif
