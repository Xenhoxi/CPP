/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/17 12:15:22 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	return ;
}

char	toChar(char *str)
{
	int c;

	c = static_cast<int>(std::atoi(str));
	return (c);
}

int	isNumber(char *str)
{
	int i = -1;

	while ((size_t)++i < strlen(str) - 1)
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			return (0);
	}
	if ((str[i] != 'f' && str[i] != '.') && (str[i] < '0' || str[i] > '9'))
		return (0);
	return (1);
}

void	convertToChar(char *str)
{
	int value = 0;

	if (isNumber(str))
		value = std::atoi(str);
	else
	{
		std::cout << "Char: impossible" << std::endl;
		return ;
	}
	if (!std::strcmp(str, "nan") || !std::strcmp(str, "-inf") || !std::strcmp(str, "+inf")
		|| !std::strcmp(str, "nan") || !std::strcmp(str, "-inff") || !std::strcmp(str, "+inff"))
		std::cout << "Char: impossible" << std::endl;
	else if (value > 32 && value < 127)
		std::cout << "Char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "Char: Non displayble" << std::endl;
}

void	convertToInt(char *str)
{
	long long int	value = 0;

	if (isNumber(str))
		value = std::atoll(str);
	else
	{
		std::cout << "Int: impossible" << std::endl;
		return ;
	}
	if (!std::strcmp(str, "nan") || !std::strcmp(str, "-inf") || !std::strcmp(str, "+inf")
		|| !std::strcmp(str, "nan") || !std::strcmp(str, "-inff") || !std::strcmp(str, "+inff"))
		std::cout << "Int: impossible" << std::endl;
	else if (value >= INT_MIN && value <= INT_MAX)
		std::cout << "Int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "Int: Overflow 32 bits" << std::endl;
}

void	ScalarConverter::convert(char *str)
{
	int	value = std::atoi(str);

	convertToChar(str);
	convertToInt(str);
	std::cout << static_cast<float>(value) << std::endl;
	std::cout << static_cast<double>(value) << std::endl;
}

ScalarConverter::~ScalarConverter(void)
{
	return ;
}
