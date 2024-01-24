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
		return (new A());
	else if (random_value == 1)
		return (new B());
	else if (random_value == 2)
		return (new C());
	return (NULL);
}

void	Base::identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Class is a type A check by ptr" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Class is a type B check by ptr" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Class is a type C check by ptr" << std::endl;
	else
		std::cout << "Error unrecognized class !" << std::endl;
}

void	Base::identify(Base &p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "Class is a type A check by ref" << std::endl;
	}
	catch (std::bad_cast &e)
	{
	}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "Class is a type B check by ref" << std::endl;
	}
	catch (std::bad_cast &e)
	{
	}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "Class is a type C check by ref" << std::endl;
	}
	catch (std::bad_cast &e)
	{
	}
	return ;
}

	
