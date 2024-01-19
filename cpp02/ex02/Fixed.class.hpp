/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:08:20 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/27 11:25:19 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(const Fixed &ref);
	Fixed(const int integer);
	Fixed(const float newFloat);
	Fixed&	operator=(const Fixed &rhs);
	bool	operator<(const Fixed &rhs);
	bool	operator>(const Fixed &rhs);
	bool	operator>=(const Fixed &rhs);
	bool	operator<=(const Fixed &rhs);
	bool	operator==(const Fixed &rhs);
	bool	operator!=(const Fixed &rhs);
	Fixed&	operator+(const Fixed &rhs);
	Fixed&	operator-(const Fixed &rhs);
	Fixed&	operator*(const Fixed &rhs);
	Fixed&	operator/(const Fixed &rhs);
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed&	min(Fixed &n1, Fixed &n2);
	const static Fixed&	min(const Fixed &n1, const Fixed &n2);
	static Fixed&	max(Fixed &n1, Fixed &n2);
	const static Fixed&	max(const Fixed &n1, const Fixed &n2);
private:
	int	_fixeNumber;

	static const int _nbBit;
};

std::ostream &operator<<(std::ostream &out, const Fixed &rhs);

#endif
