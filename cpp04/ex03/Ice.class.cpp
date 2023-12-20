/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:23:00 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 12:30:02 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	return ;
}

Ice::Ice(const Ice &ref)
{
	this->_type = ref._type;
	return ;
}

Ice &Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AMateria *AMateria::clone(void) const
{
	AMateria *tmp = new Ice();	
	return (tmp);
}

Ice::~Ice(void)
{
	return ;
}
