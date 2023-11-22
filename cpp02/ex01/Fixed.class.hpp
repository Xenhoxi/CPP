/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:08:20 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/20 14:45:24 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
public:
	Fixed& operator=(const Fixed &fixed);
	Fixed& operator<<();
	Fixed(void);
	Fixed(const Fixed &ref);
	Fixed(const int integer)
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int	_fixeNumber;

	static const int _nbBit;
};

#endif
