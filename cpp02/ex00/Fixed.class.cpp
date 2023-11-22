/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:07:45 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/20 15:09:10 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const static int _bit_width = 8;

Fixed::Fixed(void) : _fixe_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixe_number = ref.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator overload" << std::endl;
	this->_fixe_number = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixe_number);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixe_number = raw;
}

