/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:15:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/29 15:57:53 by ljerinec         ###   ########.fr       */
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
	(void) src;
	return ;
}

void	Span::addNumber(int nb)
{
	if (_lst.size() == _size)
		throw Full();
	else
		_lst.push_back(nb);
	std::for_each(_lst.begin(), _lst.end(), ft_print_int);
	std::cout << std::endl;
}

int	Span::shortestSpan(void)
{
	int span = INT_MAX;

	_lst.sort();
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = _lst.end();
	std::list<int>::const_iterator	tmp = _lst.begin();
	++tmp;
	for (it = _lst.begin(); it != ite; ++it)
	{
		tmp++;
		if ((*(++tmp) - *it) < span)
			span = *(++it) - *it;
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