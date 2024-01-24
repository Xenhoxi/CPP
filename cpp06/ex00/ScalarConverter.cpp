/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/23 13:54:47 by ljerinec         ###   ########.fr       */
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

void	fromChar(char *str)
{
	char	value = *str;
	
	if (value > 32 && value < 127)
		std::cout << "Char: " << value << std::endl;
	else
		std::cout << "Char: Non displayble" << std::endl;
	std::cout << "Int: " << static_cast<int>(value) << std::endl;
	std::cout << "Float: " << std::fixed << static_cast<float>(value) << std::endl;
	std::cout << "Double: " << static_cast<double>(value) << std::endl;
}

void	fromInt(char *str)
{
	int	value = std::atoi(str);
	if (value > 32 && value < 127)
		std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "Char: Non displayble" << std::endl;
	std::cout << "Int: " << value << std::endl;
	std::cout << "Float: " << std::fixed << static_cast<float>(value) << std::endl;
	std::cout << "Double: " << static_cast<double>(value) << std::endl;
}

void	fromFloat(char *str)
{
	float	value = std::atof(str);
	if (value > 32 && value < 127)
		std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "Char: Non displayble" << std::endl;
	std::cout << "Int: " << static_cast<int>(value) << std::endl;
	std::cout << "Float: " << std::fixed << value << std::endl;
	std::cout << "Double: " << static_cast<double>(value) << std::endl;
}

void	fromDouble(char *str)
{
	double	value = std::atof(str);
	if (value > 32 && value < 127)
		std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
	else if ()
		std::cout << "Char: Non displayble" << std::endl;
	std::cout << "Int: " << static_cast<int>(value) << std::endl;
	std::cout << "Float: " << std::fixed << static_cast<float>(value) << std::endl;
	std::cout << "Double: " << static_cast<double>(value) << std::endl;
}

void	others(char *str)
{
	if (!std::strcmp(str, "nan") || !std::strcmp(str, "nanf"))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: nanf" << std::endl;
		std::cout << "Double: nan" << std::endl;
	}
	else if (!std::strcmp(str, "-inf") || !std::strcmp(str, "-inff"))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: -inff" << std::endl;
		std::cout << "Double: -inf" << std::endl;
	}
	else if (!std::strcmp(str, "+inf") || !std::strcmp(str, "+inff"))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: +inff" << std::endl;
		std::cout << "Double: +inf" << std::endl;
	}
}

void	ScalarConverter::convert(char *str)
{
	if (isInt(str))
		fromInt(str);
	else if (isFloat(str))
		fromFloat(str);
	else if (isDouble(str))
		fromDouble(str);
	else if (isChar(str))
		fromChar(str);
	else
		others(str) ;
}

ScalarConverter::~ScalarConverter(void)
{
	return ;
}
