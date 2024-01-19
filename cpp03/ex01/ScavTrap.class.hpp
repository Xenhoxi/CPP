/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:56:03 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/15 14:22:42 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &ref);
	ClapTrap& operator=(const ClapTrap &rhs);
	~ScavTrap(void);
	void	attack(const std::string &target);
	void	guardGate(void);
private:
	ScavTrap(void);
};

#endif
