/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:15:36 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/07 13:42:51 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

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
		if (!std::strncmp(buff, "ADD", 4))
			phonebook.SetContact();
		if (!std::strncmp(buff, "SEARCH", 7))
			phonebook.Search();
	}
	return (0);
}
