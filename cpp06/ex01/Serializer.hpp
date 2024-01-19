/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:41 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/19 15:23:44 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <stdint.h>
#include <string>
#include <iostream>

struct Data
{
	std::string name;
	int			age;
};


class Serializer
{
public:
	~Serializer();
	static	uintptr_t	serialize(Data *ptr);
	static	Data		*deserialize(uintptr_t raw);
private:
	Serializer();
	Serializer(const Serializer &src);
	Serializer &operator=(const Serializer &src);
};

#endif