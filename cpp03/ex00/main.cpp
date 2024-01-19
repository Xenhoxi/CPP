/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/28 12:11:56 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

int	main(void)
{
	ClapTrap 	a("ClapTrap_1");
	ClapTrap	b("ClapTrap_2");

	a.attack("Humain");
	a.takeDamage(3);
	a.takeDamage(3);
	a.takeDamage(3);
	a.takeDamage(3);
	a.beRepaired(10);
	b.attack("Voiture");
	b.takeDamage(10);
	b.beRepaired(10);
	a.takeDamage(100);
	return (0);
}