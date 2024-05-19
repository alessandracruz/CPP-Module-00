/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:00:14 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/18 18:00:17 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include<iostream>

class Harl
{
	private:
		void		debug( void);
		void		info( void);
		void		warning( void );
		void		error( void );
		void		(Harl::*function[4])(void);
		std::string	levels[4];

	public:
		Harl(void);
		~Harl();
		void		complain(std::string level);

};

#endif