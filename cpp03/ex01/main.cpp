/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/14 13:30:31 by ljerinec         ###   ########.fr       */
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
	a.takeDamage(12);
	a.beRepaired(10);
	a.attack("Useless things");
	scav.takeDamage(5);
	scav.beRepaired(6);
	scav.takeDamage(500);
	scav.attack("ClapTrap");
	scav.guardGate();
	return (0);
}