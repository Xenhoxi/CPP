/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:18 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/25 16:54:30 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>

int main()
{
	Array<int> un(10);
	for (int i = 0; i < 10; i++)
	{
		un.array[i] = i + 1;
		std::cout << un.array[i] << "\n";
	}
	std::cout << std::endl; 
	Array<int> deux(un);
	for (int i = 0; i < 10; i++)
	{
		std::cout << deux.array[i] << "\n";
	}
	// Array<std::string> (10);
	return (0);
}