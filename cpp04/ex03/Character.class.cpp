/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:55:44 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 12:45:46 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

Character::Character(void)
{
    return ;
}

Character::Character(std::string name)
{
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

void	Character::equip(AMateria *matos)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = matos;
			return ;
		}
	}
	std::cout << "Inventory full !" << std::endl;
}

void	Character::unequip(int idx)
{
	if (!_inventory[idx])
		_inventory[idx] = 0;
	else
		std::cout << "No item in this slot !" << std::endl;
}

Character::~Character(void)
{
    return ;
}
