/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/17 10:24:12 by ljerinec         ###   ########.fr       */
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

void	ScalarConverter::convert(char *str)
{
	int	value = std::atoi(str);
	std::cout << static_cast<char>(value) << std::endl;
	std::cout << static_cast<int>(value) << std::endl;
	std::cout << static_cast<float>(value) << std::endl;
	std::cout << static_cast<double>(value) << std::endl;
}

ScalarConverter::~ScalarConverter(void)
{
	return ;
}
