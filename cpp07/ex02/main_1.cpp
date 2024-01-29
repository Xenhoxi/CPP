/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:18 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/29 09:45:43 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>

int main()
{
	Array<int> un(10);
	std::cout << std::endl; 
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
	return (0);
}