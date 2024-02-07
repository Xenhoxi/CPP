/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:15:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/07 14:19:31 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	ft_print_int(int x);

Span::Span(void)
{
	return ;
}

Span::Span(unsigned int N) : _size(N)
{
	return ;
}

Span::Span(const Span &src)
{
	*this = src;
}

Span	&Span::operator=(const Span &rhs)
{
	_size = rhs._size;
	_lst = rhs._lst;
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (_lst.size() == _size)
		throw Full();
	else
		_lst.push_back(nb);
}

void	Span::addRange(int first, int last)
{
	while (first < last)
	{
		addNumber(first);
		first++;
	}
}

int	Span::shortestSpan(void)
{
	int span = INT_MAX;

	_lst.sort();
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = _lst.end();
	std::list<int>::const_iterator	tmp = _lst.begin();
	++tmp;
	for (it = _lst.begin(); it != ite; it++)
	{
		if (*tmp - *(it) < span)
			span = *tmp - *(it);
		tmp++;
		if (tmp == ite)
			return (span);
	}
	return (span);
}

int	Span::longestSpan(void)
{
	return (*std::max_element(_lst.begin(), _lst.end()) - *std::min_element(_lst.begin(), _lst.end()));
}

Span::~Span(void)
{
	return ;
}

void	ft_print_int(int x)
{
	std::cout << x << std::endl;
}