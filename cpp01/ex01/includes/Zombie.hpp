/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:44:26 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/28 15:56:55 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Zombie.hpp
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
 private:
  std::string name;

 public:
    Zombie();
    ~Zombie();
    void announce() const;
    void setName(const std::string& name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
