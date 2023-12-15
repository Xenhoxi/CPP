/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:07:45 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/15 14:22:10 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

const static int _bit_width = 8;

ClapTrap::ClapTrap(void)
{
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = ref._name;
	_health = ref._health;
	_energy = ref._energy;
	_attack = ref._attack;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Copy assignment operator overload" << std::endl;
	_name = rhs._name;
	_health = rhs._health;
	_energy = rhs._energy;
	_attack = rhs._attack;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy <= 0)
		std::cout << this->_name << " don't have enought energy point to be repaired " << std::endl;
	else if (this->_health <= 0)
		std::cout << this->_name << " don't have enought health point to attack " << std::endl;
	else
	{
		_energy--;
		std::cout << _name << " attacks " << target << " , causing " << _attack << " points of damage ! ";
		std::cout << _energy << " energy point(s) left ! " << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health < amount)
		this->_health = 0;
	else
		this->_health -= amount;
	std::cout << this->_name << " take " << amount << " points of damage ! He's now " << this->_health << " hp and " << this->_energy << " Energy point(s)"<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy == 0)
		std::cout << this->_name << "don't have enought energy point to be repaired " << std::endl;
	else if (this->_health == 0)
		std::cout << this->_name << " is dead" << std::endl;	
	else
	{
		this->_health += amount;
		this->_energy--;
		std::cout << this->_name << " got " << amount << " hp ! total health is " << this->_health << " hp ! " << this->_energy << " Energy point(s) left"<< std::endl;
	}
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}
