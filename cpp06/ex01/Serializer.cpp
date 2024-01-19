/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/19 15:33:23 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	return ;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	std::cout << "Pointer has been serialized !" << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	std::cout << "Pointer has been deserialized !" << std::endl;
	return (reinterpret_cast<Data *>(raw));
}

Serializer::~Serializer(void)
{
	return ;
}
