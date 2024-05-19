/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:02:16 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/18 18:02:18 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl annoying;

    annoying.complain("DEBUG");
    annoying.complain("INFO");
    annoying.complain("WARNING");
    annoying.complain("ERROR");
    return 0;
}