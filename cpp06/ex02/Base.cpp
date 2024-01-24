/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/19 15:33:23 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void)
{
	return ;
}

Base *Base::generate(void)
{
	int	random_value;

	std::srand(time(0));
	random_value = std::rand();
	random_value = random_value % 3;
	if (random_value == 0)
	{	
		std::cout << "A" << std::endl;
		return (new A());
	}
	else if (random_value == 1)
	{
		std::cout << "B" << std::endl;
		return (new B());
	}
	else if (random_value == 2)
	{
		std::cout << "C" << std::endl;
		return (new C());
	}
	return (NULL);
}

void	Base::identify(Base *p)
{
	(void) p;
	return ;
}

void	Base::identify(Base &p)
{
	(void) p;
	return ;
}

	
