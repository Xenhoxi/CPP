/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:26:43 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/18 13:57:02 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	return ;
}

Cure::Cure(const Cure &ref)
{
	this->_type = ref.getType();
	return ;
}

Cure &Cure::operator=(const Cure &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *";
	return ;
}

Cure::~Cure(void)
{
	return ;
}
