/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:55:44 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 15:11:05 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

Character::Character(void)
{
    return ;
}

Character::Character(std::string name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
	_name = name;
}

Character::Character(const Character &ref)
{
	*this = ref;
    return ;
}

Character &Character::operator=(const Character &rhs)
{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			rhs._inventory[i]->clone();
	}
    return (*this);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory full !" << std::endl;
}

void	Character::unequip(int idx)
{
	if (_inventory[idx])
	{
		std::cout << "Item of type " << _inventory[idx]->getType() << " unequiped !" << std::endl;
		_inventory[idx] = 0;
	}
	else
		std::cout << "No item in this slot !" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "No item in this slot !" << std::endl;
}

std::string const &Character::getName(void) const
{
	return (_name);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
    return ;
}
