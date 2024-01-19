/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:08:20 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/26 22:40:45 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed&	operator=(const Fixed &rhs);
	bool	operator>(const Fixed &rhs);
	Fixed(void);
	Fixed(const Fixed &ref);
	Fixed(const int integer);
	Fixed(const float newFloat);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
private:
	int	_fixeNumber;

	static const int _nbBit;
};

std::ostream &operator<<(std::ostream &out, const Fixed &rhs);

#endif
