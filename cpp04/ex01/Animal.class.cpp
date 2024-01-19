/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:34:09 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/06 14:08:16 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(const Animal &ref)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	_type = ref._type;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal Copy assignment operator overload" << std::endl;
	_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	return ;
}
