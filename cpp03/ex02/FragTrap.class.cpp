/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:04:06 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/14 13:35:01 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(const FragTrap &ref) : ClapTrap(ref._name)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	_health = ref._health;
	_energy = ref._energy;
	_attack = ref._attack;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap Copy assignment operator overload" << std::endl;
	_name = rhs._name;
	_health = rhs._health;
	_energy = rhs._energy;
	_attack = rhs._attack;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "HighFiveGuyssss ???..." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}
