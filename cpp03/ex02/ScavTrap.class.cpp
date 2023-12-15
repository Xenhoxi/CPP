/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:58:01 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/13 10:36:52 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_energy = 100;
	_health = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	this->_name = ref._name;
	this->_attack = ref._attack;
	this->_health = ref._health;
	this->_energy = ref._energy;	
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap Copy assignment operator overload" << std::endl;
	_name = rhs._name;
	_health = rhs._health;
	_energy = rhs._energy;
	_attack = rhs._attack;
	return (*this);
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
		std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attack << " points of damage ! ";
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