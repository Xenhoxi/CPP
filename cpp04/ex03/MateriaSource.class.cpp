/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:00:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 15:04:36 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_blueprint[i] = 0;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	*this = ref;
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._blueprint[i])
			_blueprint[i] = rhs._blueprint[i]->clone();
	}
	return (*this);
}

void    MateriaSource::learnMateria(AMateria *new_bp)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_blueprint[i])
		{
			_blueprint[i] = new_bp;
			return ;
		}
	}
	std::cout << "List of blueprint is full !" << std::endl;
	return ;
}

AMateria    *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_blueprint[i] && _blueprint[i]->getType() == type)
			return (_blueprint[i]->clone());
	}
	return (0);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_blueprint[i])
			delete _blueprint[i];
	}
	return ;
}
