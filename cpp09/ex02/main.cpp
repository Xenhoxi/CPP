/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:50:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/08 14:56:24 by ljerinec         ###   ########.fr       */
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

void	sortVector(char **argv)
{
	std::vector<unsigned int>	VecSmall;
	std::vector<unsigned int>	VecBig;
	int							i = 0;

	while (argv[++i])
		VecSmall.push_back(atoi(argv[i]));
	std::vector<unsigned int>::iterator it = VecSmall.begin();
	std::vector<unsigned int>::iterator it2 = VecSmall.begin();
	it2++;
	std::vector<unsigned int>::iterator ite = VecSmall.end();
	while (it != ite || it2 != ite)
	{
		if (it == ite || it2 == ite)
			break ;
		if (*it > *it2)
			std::swap(*it, *it2);
		it += 2;
		it2 += 2;
	}
	for (size_t i = 1; i < VecSmall.size(); ++i)
	{
		VecBig.push_back(VecSmall[i]);
		VecSmall.erase(VecSmall.begin() + i);
	}
	printVec(VecSmall);
	printVec(VecBig);
}

// 5 3 4 9 1 2
// 3 5 4 9 1 2

// 3 5 4        ||   9 1 2
// 3 5 4	    ||   1 9 2

// 3 4			||	 1 2
// 5            ||	 9

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
		printBefore(argv);
		sortVector(argv);
		// sortDeque();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}