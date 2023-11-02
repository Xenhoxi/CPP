/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:42:36 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/02 23:22:12 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	print_to_upper(char *str)
{
	char c;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			c = std::toupper(*str);
		else
			c = *str;
		std::cout << c;
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[++i])
		print_to_upper(argv[i]);
	std::cout << std::endl;
	return (0);
}
