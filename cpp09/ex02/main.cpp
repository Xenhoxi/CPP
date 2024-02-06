/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:50:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/06 11:57:51 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	isNumber(std::string str)
{
	std::string::iterator ite = str.end();
	for (std::string::iterator it = str.begin(); it != ite; it++)
	{
		if (!isdigit(*it))
			return (0);
	}
	return (1);
}

void	checkNumbers(char **argv)
{
	int i = -1;
	while (argv[++i])
		if (!isNumber(argv[i]))
			throw ErrorMsg("Not a positiv numbers or not a number in the list !");
}

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "Try with args !" << std::endl;
		return (1);
	}
	try
	{
		checkNumbers(argv);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}