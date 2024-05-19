/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:07:32 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/18 19:07:35 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int                 _value;
    static const int    _fractionalBits = 8;

public:
    Fixed();                               // Construtor padrão
    Fixed(const Fixed& other);             // Construtor de cópia
    Fixed& operator=(const Fixed& other);  // Operador de atribuição de cópia
    ~Fixed();                              // Destruidor

    int getRawBits() const;                // Retorna o valor bruto
    void setRawBits(int const raw);        // Define o valor bruto
};

#endif
