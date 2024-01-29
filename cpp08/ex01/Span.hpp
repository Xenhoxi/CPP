/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:06:16 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/29 15:36:10 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <exception>
#include "limits.h"

class Span
{
private:
	unsigned int	_size;
	std::list<int>	_lst;
public:
	Span(void);
	Span(unsigned int N);
	Span(const Span &src);
	Span &operator=(const Span &rhs);
	~Span(void);
	void	addNumber(int nb);
	int		shortestSpan(void);
	int		longestSpan(void);

	class Full : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("List of integer is full !");
		}
	};
};

#endif