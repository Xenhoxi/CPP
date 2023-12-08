/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/08 14:18:40 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int	main(void)
{
	ClapTrap 	a("Bob");
	ScavTrap	scav("George");

	a.attack("Humain");
	a.takeDamage(3);
	a.takeDamage(3);
	a.beRepaired(10);
	a.attack("Useless things");
	scav.takeDamage(5);
	scav.beRepaired(6);
	scav.attack("ClapTrap");
	scav.guardGate();
	return (0);
}