/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/28 12:57:20 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int	main(void)
{
	// ClapTrap 	a("Pute");
	// ClapTrap	b("Caca");
	ScavTrap	slav("SlavTrap_1");

	// a.attack("Humain");
	// a.takeDamage(3);
	// a.takeDamage(3);
	// a.takeDamage(3);
	// a.takeDamage(3);
	// a.beRepaired(10);
	// b.attack("Voiture");
	// b.takeDamage(10);
	// b.beRepaired(10);
	// a.takeDamage(100);
	slav.takeDamage(5);
	slav.beRepaired(6);
	slav.attack("ClapTrap");
	slav.guardGate();
	return (0);
}