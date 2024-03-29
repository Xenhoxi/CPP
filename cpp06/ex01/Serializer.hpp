/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:41 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/23 13:54:07 by ljerinec         ###   ########.fr       */
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
	~Serializer(void);
	static	uintptr_t	serialize(Data *ptr);
	static	Data		*deserialize(uintptr_t raw);
private:
	Serializer(void);
	Serializer(const Serializer &src);
	Serializer &operator=(const Serializer &src);
};

#endif