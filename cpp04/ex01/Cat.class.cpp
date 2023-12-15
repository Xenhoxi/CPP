/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:41:48 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/14 15:36:12 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	_brain = new Brain();
	_type = "Cat";
}

Cat::Cat(const Cat &ref) : Animal()
{
	std::cout << "Cat Copy constructor called" << std::endl;
	_brain = new Brain();
	_type = ref._type;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Copy assignment operator overload" << std::endl;
	_brain = new Brain();
	_type = rhs._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
