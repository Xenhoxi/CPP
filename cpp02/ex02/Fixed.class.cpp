/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:07:45 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/08 13:08:56 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nbBit = 8;

Fixed::Fixed(void) : _fixeNumber(0)
{
}

Fixed::Fixed(const Fixed &ref)
{
	this->_fixeNumber = ref.getRawBits();
}

Fixed::Fixed(const int integer) : _fixeNumber((integer << Fixed::_nbBit))
{
}

Fixed::Fixed(const float newFloat)
{
	this->_fixeNumber = (newFloat * std::pow(2, Fixed::_nbBit) + 0.5);
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
	return (this->getRawBits() / std::pow(2, Fixed::_nbBit));
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> Fixed::_nbBit);
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	this->_fixeNumber = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator<(const Fixed &rhs)
{
	if (this->getRawBits() < rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool	Fixed::operator>(const Fixed &rhs)
{
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool	Fixed::operator>=(const Fixed &rhs)
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool	Fixed::operator<=(const Fixed &rhs)
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool	Fixed::operator==(const Fixed &rhs)
{
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool	Fixed::operator!=(const Fixed &rhs)
{
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	else
		return (0);
}

Fixed&	Fixed::operator+(const Fixed &rhs)
{
	this->_fixeNumber += rhs.getRawBits();
	return (*this);
}

Fixed&	Fixed::operator-(const Fixed &rhs)
{
	this->_fixeNumber -= rhs.getRawBits();
	return (*this);
}

Fixed&	Fixed::operator*(const Fixed &rhs)
{
	this->_fixeNumber = (this->toFloat() * rhs.toFloat()) * std::pow(2, Fixed::_nbBit);
	return (*this);
}

Fixed&	Fixed::operator/(const Fixed &rhs)
{
	this->_fixeNumber = (this->toFloat() / rhs.toFloat()) * std::pow(2, Fixed::_nbBit);
	return (*this);
}

Fixed& Fixed::operator++()
{
	++_fixeNumber;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;
	++_fixeNumber;
	return (temp);
}

Fixed& Fixed::operator--()
{
	--_fixeNumber;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;
	--_fixeNumber;
	return (temp);
}

Fixed&	Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1.getRawBits() <= n2.getRawBits())
		return (n1);
	else
		return (n2);
}

const Fixed&	Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() <= n2.getRawBits())
		return (n1);
	else
		return (n2);
}

Fixed&	Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1.getRawBits() >= n2.getRawBits())
		return (n1);
	else
		return (n2);
}

const Fixed&	Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() >= n2.getRawBits())
		return (n1);
	else
		return (n2);
}

Fixed::~Fixed(void)
{
	return ;
}

std::ostream &operator<<(std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return (out);
}
