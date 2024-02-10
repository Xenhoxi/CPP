/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:10:08 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/10 20:10:33 by ljerinec         ###   ########.fr       */
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
	int i = 0;
	while (argv[++i])
		if (!isNumber(argv[i]))
			throw ErrorMsg("Error in the inputs !");
}

void	printBefore(char **argv)
{
	std::cout << "Before: ";
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
}

void	printVec(std::vector<unsigned int> Vec)
{
	for (std::vector<unsigned int>::iterator it = Vec.begin(); it != Vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}