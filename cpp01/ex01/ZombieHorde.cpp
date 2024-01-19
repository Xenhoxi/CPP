/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:48:12 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/16 02:18:34 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i = -1;
	Zombie	*horde;
	
	horde = new Zombie[N];
	while (++i < N)
		horde[i].setName(name);
	return (horde);
}