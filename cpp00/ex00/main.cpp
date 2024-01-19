/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:42:36 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/28 15:32:03 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <iomanip>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	u = -1;
	
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[++i])
	{
		while (argv[i][++u])
			std::cout << (char)std::toupper(argv[i][u]);
		u = -1;
	}
	std::cout << std::endl;
	return (0);
}
