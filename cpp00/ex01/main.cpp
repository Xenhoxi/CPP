/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:15:36 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/21 16:15:27 by ljerinec         ###   ########.fr       */
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
	while (buff != "EXIT")
	{
		std::getline(std::cin, buff);
		if (buff == "ADD")
			phonebook.SetContact();
		else if (buff == "SEARCH")
			phonebook.Search();
		else if(buff == "" || buff == "EXIT")
			break ;
		else
			std::cout << "Invalid command !" << std::endl;
		buff = "";
	}
	return (0);
}
