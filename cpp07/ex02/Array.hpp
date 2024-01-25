/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:19:18 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/25 16:56:40 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
public:
	T *array;

	Array<T>()
	{
		array = new T[1];
	};
	Array<T>(unsigned int n)
	{
		array = new T[n];
		for (size_t i = 0; i < n; i++)
			std::cout << array[i] << "\n";
	};
	Array<T>(const Array<T> &src)
	{
		*this = src;
	};
	Array<T> &operator=(const Array<T> &rhs)
	{
		int	i = 0;
		while (rhs.array[i++]) {
		}
		this->array = new T[i];
		std::cout << "i : " << i << std::endl;
		for (int u = 0; u < i; u++)
			this->array[u] = rhs.array[u];
		return (*this);
	};
};

#endif