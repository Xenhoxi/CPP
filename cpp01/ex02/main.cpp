/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:38:45 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/10 16:19:59 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "Memory address :" << std::endl; 
	std::cout << "The memory address of the string variable = " << &string <<std::endl;
	std::cout << "The memory address held by stringPTR = " << &*stringPTR <<std::endl;
	std::cout << "The memory address held by stringREF = " << &stringREF <<std::endl;
	std::cout << "Value :" << std::endl; 
	std::cout << "The value of the string variable = " << string <<std::endl;
	std::cout << "The value pointed to by stringPTR = " << *stringPTR <<std::endl;
	std::cout << "The value pointed to by stringREF = " << stringREF <<std::endl;

	// string = "HI THIS IS not BRAIN";
	// std::cout << "The value pointed to by stringREF after change of string = " << stringREF <<std::endl;

	// stringREF = "HI THIS";
	// std::cout << "The value of the string variable after modif of stringREF= " << string <<std::endl;
	return (0);
}
