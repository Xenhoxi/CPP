/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:15:36 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/04 20:55:11 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

void	check_commande(char *buff, PhoneBook *book)
{
	// if (!std::strncmp(buff, "ADD", 4))
	// if (!std::strncmp(buff, "SEARCH", 7))
		// book::search();
	return ;
}

int	is_exit(char *buff)
{
	if (!std::strncmp(buff, "EXIT", 5))
		return (1);
	return (0);
}

int	main(void)
{
	char		buff[128];
	PhoneBook	phonebook;
	
	while (!is_exit(buff))
	{
		std::cin >> buff;
		check_commande(buff, &phonebook);
	}
	return (0);
}
