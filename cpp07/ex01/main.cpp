/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:18 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/25 15:49:40 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <string>
#include <iostream>

int main()
{
	std::string *array = new std::string[5];
	for (int i = 0; i < 5; i++)
		array[i] = "test";
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;
	::iter(array, 5, ::add);
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;

	int *array_int = new int[5];
	for (int i = 0; i < 5; i++)
		array_int[i] = i;
	for (int i = 0; i < 5; i++)
		std::cout << array_int[i] << std::endl;
	::iter(array_int, 5, ::add);
	for (int i = 0; i < 5; i++)
		std::cout << array_int[i] << std::endl;

	delete [] array;
	delete [] array_int;
	return (0);
}