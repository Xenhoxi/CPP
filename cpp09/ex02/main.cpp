/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:50:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/09 15:31:55 by ljerinec         ###   ########.fr       */
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

size_t	binarySearch(std::vector<unsigned int> res, unsigned int nb)
{
	if (res[res.size() - 1] < nb)
		return (res.size());
	if (res[0] > nb)
		return (0);
	size_t	first = 0;
	size_t	last = res.size();
	size_t	mid = (first + (last - first) / 2);
	while (first != mid && mid != last)
	{
		if (nb == res[mid])
			return (mid);
		if (nb < res[mid])
			last = mid;
		else if (nb > res[mid])
			first = mid;
		mid = (first + (last - first) / 2);
	}
	return (mid + 1);
}

void	mergeSort(std::vector<unsigned int>	&Vec)
{
	if (Vec.size() <= 1)
		return ;

	for (size_t u = 0; u + 1 < Vec.size(); u += 2)
	{
		if (Vec[u] > Vec[u + 1])
			std::swap(Vec[u], Vec[u + 1]);
	}
	std::vector<unsigned int> res;
	for (size_t i = 1; i + 1 <= Vec.size(); i += 2)
		res.push_back(Vec[i]);
	mergeSort(res);
	for (size_t i = 0; i < Vec.size(); i += 2)
		res.insert(res.begin() + binarySearch(res, Vec[i]), Vec[i]);
	Vec = res;
}

void	sortVector(char **argv)
{
	std::vector<unsigned int>	Vec;
	int							i = 0;

	while (argv[++i])
		Vec.push_back(atoi(argv[i]));

	clock_t start = clock();
	mergeSort(Vec);
	clock_t end = clock();
	printVec(Vec);
	double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << std::fixed << std::setprecision(2) << duration << std::endl;
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