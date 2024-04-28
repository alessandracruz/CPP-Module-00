/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:44:26 by acastilh          #+#    #+#             */
/*   Updated: 2024/04/28 15:50:26 by acastilh         ###   ########.fr       */
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
  Zombie(std::string name);
  ~Zombie();

  void announce() const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
