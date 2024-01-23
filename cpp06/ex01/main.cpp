/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/23 10:50:15 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data		someone;
	Data		*sameone = NULL;
	uintptr_t	address;

	someone.name = "Luc";
	someone.age = 58;
	std::cout << someone.name << " is " << someone.age << std::endl;
	std::cout << "Address before serialize pointer : " << &sameone << std::endl;
	address = Serializer::serialize(&someone);
	sameone = Serializer::deserialize(address);
	std::cout << "Address after deserialize pointer : " << sameone << std::endl;
	std::cout << sameone->name << " is " << sameone->age << std::endl;
	return (0);
}