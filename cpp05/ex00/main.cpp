/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/04 13:59:08 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

int main(void)
{
	Bureaucrat bureau_1("michel", 150);
	Bureaucrat bureau_2("Karen", 1);

	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;
	bureau_1.promote();
	bureau_2.promote();
	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;
	std::cout << std::endl;
	
	bureau_1.demote();
	bureau_1.demote();
	bureau_2.demote();
	bureau_2.demote();
	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;
	std::cout << std::endl;

	Bureaucrat bureau_3("George", -5);
	Bureaucrat bureau_4("Vero", 1800);
	std::cout << bureau_3 << std::endl;
	std::cout << bureau_4 << std::endl;
	return (0);
}