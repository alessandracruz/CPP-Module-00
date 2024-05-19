/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:18:05 by acastilh          #+#    #+#             */
/*   Updated: 2024/05/18 20:38:21 by acastilh         ###   ########.fr       */
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

    // Sobrecarga de operadores de comparação
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Sobrecarga de operadores aritméticos
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Sobrecarga de operadores de incremento/decremento
    Fixed& operator++();    // Pré-incremento
    Fixed operator++(int);  // Pós-incremento
    Fixed& operator--();    // Pré-decremento
    Fixed operator--(int);  // Pós-decremento

    // Funções estáticas min e max
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

// Sobrecarga do operador de inserção <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
