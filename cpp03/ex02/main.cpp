/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/11 14:32:28 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int	main(void)
{
	// ClapTrap 	a("Bob");
	// ScavTrap	slav("Scav");
	FragTrap	frag("Frag");

	// a.attack("Humain");
	// a.takeDamage(3);
	// a.takeDamage(3);
	// a.beRepaired(10);
	// a.takeDamage(100);
	// slav.takeDamage(5);
	// slav.beRepaired(6);
	// slav.attack("ClapTrap");
	// slav.guardGate();
	frag.takeDamage(5);
	frag.beRepaired(6);
	frag.attack("ScavTrap");
	frag.highFiveGuys();
	return (0);
}