/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:07:45 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/23 17:02:32 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nbBit = 8;

Fixed::Fixed(void) : _fixeNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixeNumber = ref.getRawBits();
}

Fixed::Fixed(const int integer) : _fixeNumber((integer << Fixed::_nbBit))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float newFloat) : _fixeNumber(newFloat)
{
	std::cout << "Float constructor called" << _fixeNumber << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator overload" << std::endl;
	this->_fixeNumber = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixeNumber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixeNumber = raw;
}

float	Fixed::toFloat(void) const
{
	return (this->getRawBits() << Fixed::_nbBit * 0);
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> Fixed::_nbBit);
}

std::ostream &operator<<(std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return (out);
}
