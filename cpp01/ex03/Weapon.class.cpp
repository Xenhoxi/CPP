/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:34:58 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/13 21:22:03 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void	Weapon::setType(std::string newtype)
{
	this->_type = newtype;
	return ;
}

const std::string	&Weapon::getType(void)
{
	std::string &stringREF = this->_type;
	return (stringREF);
}
