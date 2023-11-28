/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/28 11:04:56 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

int	main(void)
{
	ClapTrap 	a("Pute");
	ClapTrap	b("Caca");
	a.attack("Humain");
	a.takeDamage(10);
	a.beRepaired(10);
	b.attack("Voiture");
	b.takeDamage(10);
	return (0);
}