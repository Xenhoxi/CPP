/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:46:03 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/13 21:22:39 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name;
	std::cout << "attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
	return ;
}
