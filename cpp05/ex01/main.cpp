/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 13:36:03 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main(void)
{
	// Bureaucrat bureau_1("michel", 1500);
	// Bureaucrat bureau_1("michel", 0);
	Bureaucrat bureau_1("michel", 15);
	Bureaucrat bureau_2("Karen", 50);
	Form contract("Contract_1", 50, 80);

	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;
	std::cout << contract << std::endl;
	// contract.beSigned(bureau_2);
	// contract.beSigned(bureau_1);
	bureau_1.signForm(contract);
	return (0);
}