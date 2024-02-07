/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:50:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/07 14:45:39 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span sp1 = Span(5);

	try
	{
		sp1.addNumber(1);
		sp1.addNumber(25);
		sp1.addNumber(240);
		sp1.addNumber(630);
		sp1.addNumber(1890);
		sp1.addNumber(2000);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Shortest Span: " << sp1.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp1.longestSpan() << std::endl;

	int n = 100000;
	Span sp = Span(n);
	try
	{
		sp.addRange(0, n - 1);
		sp.addNumber(10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	return (0);
}