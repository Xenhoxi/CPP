/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:50:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/29 12:38:48 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Find.hpp"

int main()
{
	std::list<int>  lst;

	for (int i = 0; i < 20; i++)
		lst.push_back(i);
	try
	{
		easyfind(lst, 15);
		easyfind(lst, 25);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::vector<int>  vect(10,100);
	try
	{
		easyfind(vect, 100);
		easyfind(vect, 1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}