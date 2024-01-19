/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:38:45 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/29 11:41:06 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(void)
{
	Zombie	*horde;
	int		N = 2;
	int		i = -1;

	horde = zombieHorde(N, "Bob");
	horde[0].announce();
	std::cout << std::endl;
	while (++i < N)
		horde[i].announce();
	delete [] horde;
	return (0);
}
