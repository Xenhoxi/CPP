/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:23:00 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/18 13:57:17 by ljerinec         ###   ########.fr       */
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
	this->_type = ref.getType();
	return ;
}

Ice &Ice::operator=(const Ice &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
	return ;
}

Ice::~Ice(void)
{
	return ;
}
