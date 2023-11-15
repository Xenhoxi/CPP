/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:38:45 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/15 13:17:01 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << ERROR;
		return (1);
	}
	else
	{
		Replace	replace(argv);
		replace.replaceString();
	}
	return (0);
}
