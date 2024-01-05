/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 00:38:47 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main(void)
{
	Bureaucrat bureau_1("michel", 150);
	Bureaucrat bureau_2("Karen", 1);
	Form contract("Contract_1", -1, -1);

	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;
	std::cout << contract << std::endl;
	return (0);
}