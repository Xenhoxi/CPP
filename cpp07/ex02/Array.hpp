/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:19:18 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/29 10:40:52 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
private:
	int	_size;
public:
	class OutOfBound : public std::exception
	{
	public:
		virtual const char *what() const throw() {
			return ("Index out of bound !");
		}
	};

	T *array;
	Array<T>(void) : _size(0)
	{
		array = new T[0];
	};
	~Array<T>(void)
	{
		delete [] array; 
	};
	Array<T>(unsigned int n) : _size(n)
	{
		array = new T[n];
	};
	Array<T>(const Array<T> &src)
	{
		*this = src;
	};
	Array<T> &operator=(const Array<T> &rhs)
	{
		_size = rhs._size;
		array = new T[size()];
		for (int i = 0; i < size() ; i++)
			this->array[i] = rhs.array[i];
		return (*this);
	};
	T &operator[](int index)
	{
		if (index >= size() || index < 0)
			throw OutOfBound();
		return (array[index]);
	}
	int	size(void)
	{
		return (_size);
	}
};

#endif