/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/01 10:17:20 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data		someone;
	Data		*other = NULL;
	uintptr_t	address = 0;

	someone.name = "Luc";
	someone.age = 58;
	std::cout << someone.name << " is " << someone.age << std::endl;
	std::cout << "Address before serialize pointer : " << &someone << std::endl;
	address = Serializer::serialize(&someone);
	std::cout << "Value in uintptr : " << address << std::endl;
	other = Serializer::deserialize(address);
	std::cout << "Address after deserialize pointer : " << other << std::endl;
	std::cout << other->name << " is " << other->age << std::endl;
	return (0);
}