/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:41:48 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/11 11:07:29 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_type = ref._type;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Copy assignment operator overload" << std::endl;
	_type = rhs._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
