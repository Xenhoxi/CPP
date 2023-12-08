/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:58:01 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/08 14:15:50 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_energy = 100;
	_health = 50;
	_attack = 20;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " don't have enought energy point to be repaired !" << std::endl;
	else if (this->_health <= 0)
		std::cout << "ClapTrap " << this->_name << " don't have enought health point to attack !" << std::endl;
	else
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " is now attacking " << target << " , dealing " << _attack << " points of damage ! ";
		std::cout << _energy << " energy point(s) left ! " << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in GuardGate Mode !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}