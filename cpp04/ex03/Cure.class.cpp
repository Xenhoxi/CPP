/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:26:43 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 12:30:14 by ljerinec         ###   ########.fr       */
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
	*this = ref;
	return ;
}

Cure &Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AMateria *AMateria::clone(void) const
{
	AMateria *tmp = new Cure();	
	return (tmp);
}

Cure::~Cure(void)
{
	return ;
}
