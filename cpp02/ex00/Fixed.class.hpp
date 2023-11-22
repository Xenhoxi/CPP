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
	Fixed(void);
	Fixed(const Fixed &ref);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int	_fixe_number;

	static const int _bit_width;
};

#endif
