/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:01:36 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/18 20:01:54 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _value;
    static const int    _fractionalBits = 8;

public:
    Fixed();                               // Construtor padrão
    Fixed(const int value);                // Construtor com inteiro
    Fixed(const float value);              // Construtor com ponto flutuante
    Fixed(const Fixed& other);             // Construtor de cópia
    Fixed& operator=(const Fixed& other);  // Operador de atribuição de cópia
    ~Fixed();                              // Destruidor

    int getRawBits() const;                // Retorna o valor bruto
    void setRawBits(int const raw);        // Define o valor bruto

    float toFloat() const;                 // Converte para ponto flutuante
    int toInt() const;                     // Converte para inteiro
};

// Sobrecarga do operador de inserção <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
