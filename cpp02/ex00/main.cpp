/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/08 12:21:06 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int	main(void)
{
	Fixed a;
	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(3);
	std::cout << a.getRawBits() << std::endl;
	Fixed b(a);
	std::cout << b.getRawBits() << std::endl;
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}