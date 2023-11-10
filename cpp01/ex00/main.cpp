/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:38:45 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/09 23:54:46 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie(name);
	return (zombie);
}

void	randomChump(std::string name)
{
	Zombie	mrZombie(name);

	mrZombie.announce();
}

int	main(void)
{
	Zombie	*zombar;

	zombar = newZombie("Pipi");
	zombar->announce();
	delete zombar;
	randomChump("Caca");
	return (0);
}
