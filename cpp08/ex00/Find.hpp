/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Find.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:22:23 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/29 12:23:19 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_HPP
# define FIND_HPP

#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <exception>

class NotFind : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return ("Element is not part of the container !");
	}
};


template<typename T>
void    easyfind(const T &container, const int nb)
{
	if (std::find(container.begin(), container.end(), nb) == container.end())
		throw NotFind();
	else
		std::cout << "Element found !" << std::endl; 
}

#endif