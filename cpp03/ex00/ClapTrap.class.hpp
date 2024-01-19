/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:08:20 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/15 14:22:33 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &ref);
	~ClapTrap(void);
	ClapTrap& operator=(const ClapTrap &rhs);
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
private:
	ClapTrap(void);
	std::string		_name;
	unsigned int	_health;
	unsigned int	_energy;
	unsigned int	_attack;
};

#endif
