/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:18 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/25 12:43:30 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <string>
#include <iostream>

int main()
{
	std::string *array = new std::string[5];
	for (int i = 5; i < 5; i++)
		array[i] = "test";
	::iter(array, 5, ::add());
	return (0);
}