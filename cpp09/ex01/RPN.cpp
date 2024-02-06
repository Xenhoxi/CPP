/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:02:55 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/06 10:05:11 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	isNumber(std::string str)
{
	std::string::iterator ite = str.end();
	for (std::string::iterator it = str.begin(); it != ite; it++)
	{
		if (!isdigit(*it))
			return (0);
	}
	return (1);
}

bool	isOperator(std::string splited)
{
	if (splited == "+" || splited == "-" || splited == "*" || splited == "/")
		return (1);
	return (0);
}

void	checkValidity(std::string input)
{
	std::istringstream 	iss(input);
	std::string			splited;
	int					operators = 0;
	int					nb = 0;

	while (iss >> splited)
	{
		if (isNumber(splited))
			nb++;
		else if (isOperator(splited))
			operators++;
	}
	if (nb != operators + 1 || operators <= 0)
		throw ErrorMsg("Error : Invalid notation.");
}

void	computeRPN(std::stack<double> &rpn, std::string input)
{
	double				result = 0;
	std::istringstream 	iss(input);
	std::string			splited;

	while (iss >> splited)
	{
		if (isNumber(splited))
			rpn.push(atoi(splited.c_str()));
		else if (isOperator(splited) && rpn.size() > 1)
		{
			int tmp = rpn.top();
				rpn.pop();
			if (splited == "+")
				result = rpn.top() + tmp;
			else if (splited == "-")
				result = rpn.top() - tmp;
			else if (splited == "*")
				result = rpn.top() * tmp;
			else if (splited == "/")
				result = rpn.top() / tmp;
			rpn.pop();
			rpn.push(result);
		}
	}
	rpn.pop();
	if (!rpn.size())
		std::cout << result <<std::endl;
	else
		std::cout << "Error : Invalid notation." << std::endl;
}