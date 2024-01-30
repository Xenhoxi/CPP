/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeFinder.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:41:10 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/25 14:21:24 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

int	isInt(char *str)
{
	int	i = -1;

	while (str[++i])
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

int isDouble(char *str)
{
	int	i = -1;

	while (str[++i])
		if (!isdigit(str[i]) && str[i] != '.')
			return (0);
	return (1);
}

int isFloat(char *str)
{
	int	i = -1;

	while ((size_t)++i < strlen(str) - 1)
		if (!isdigit(str[i]) && str[i] != '.')
			return (0);
	if (str[i] == 'f' && strlen(str) > 1)
		return (1);
	else
		return (0);
}

int	isChar(char *str)
{
	if (strlen(str) == 1)
		return (1);
	else 
		return (0);
}