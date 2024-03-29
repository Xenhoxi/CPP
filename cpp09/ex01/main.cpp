/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:50:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/06 10:07:37 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Program should be launch like this : ./RPN '5 5 + 4 * 7 -'" << std::endl;
		return (1);
	}
	std::stack<double>		rpn;
	try 
	{
		checkValidity(argv[1]);
		computeRPN(rpn, argv[1]);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}	
	return (0);
}