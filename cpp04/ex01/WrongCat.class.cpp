/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:08:35 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/14 15:37:08 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &ref) : WrongAnimal()
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->_type = ref._type;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat Copy assignment operator overload" << std::endl;
	_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaou" << std::endl;
}
