/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:41 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/12 12:07:03 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
public:
	~ScalarConverter();
	static	void	convert(char *str);
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &src);
	ScalarConverter &operator=(const ScalarConverter &src);
};

#endif