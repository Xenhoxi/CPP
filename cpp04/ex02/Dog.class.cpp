/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:40:07 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/14 15:38:21 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
	_type = "Dog";
}

Dog::Dog(const Dog &ref) : Animal()
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain();
	this->_type = ref._type;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog Copy assignment operator overload" << std::endl;
	if (this != &rhs)
	{
		delete _brain;
		this->_brain = new Brain();
		_type = rhs._type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
}