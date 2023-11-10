/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:48:12 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/10 15:29:11 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	int	i = -1;
	Zombie	*horde;
	
	horde = new Zombie[n];
	while (++i < n)
		horde[i].setName(name);
	return (horde);
}