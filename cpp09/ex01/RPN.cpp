/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:02:55 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/07 14:45:45 by ljerinec         ###   ########.fr       */
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
		if (isOperator(splited))
			operators++;
		else if (std::atoi(splited.c_str()) >= 0 && std::atoi(splited.c_str()) < 10)
			nb++;
		else
			throw ErrorMsg("Error: Not a valid digit.");
	}
	if (nb != operators + 1 || operators <= 0)
		throw ErrorMsg("Error: Invalid notation.");
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
			{
				if (tmp == 0)
					throw ErrorMsg("Error: Impossible to divide by 0.");
				result = rpn.top() / tmp;
			}
			rpn.pop();
			rpn.push(result);
		}
		else
			throw ErrorMsg("Error: Invalid notation.");
	}
	std::cout << rpn.top() << std::endl;
}