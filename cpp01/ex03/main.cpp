/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:38:45 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/13 21:11:03 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"
#include "HumanB.class.hpp"
#include "Weapon.class.hpp"
#include <iomanip>
#include <iostream>

int	main(void)
{
	{
		Weapon	club = Weapon("Crude spike club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("Baseball club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("Crude spike club");

		HumanB	jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Baseball club");
		jim.attack();
	}
	return (0);
}
