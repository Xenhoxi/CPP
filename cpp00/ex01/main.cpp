/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:15:36 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/08 13:14:42 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int	is_exit(const char *buff)
{
	if (!std::strncmp(buff, "EXIT", 5))
		return (1);
	return (0);
}

int	main(void)
{
	std::string	buff;
	PhoneBook	phonebook;
	
	std::cout << START_MSG;
	while (!is_exit(buff.c_str()))
	{
		std::cin >> buff;
		if (!std::strncmp(buff.c_str(), "ADD", 3))
			phonebook.SetContact();
		if (!std::strncmp(buff.c_str(), "SEARCH", 7))
			phonebook.Search();
	}
	return (0);
}
