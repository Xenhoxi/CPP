/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/17 14:09:02 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main(void)
{
	Bureaucrat bureau_1("michel", 15);
	Bureaucrat bureau_2("Karen", 50);
	Form contract("Contract_1", 50, 80);

	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;
	std::cout << contract << std::endl;
	bureau_1.signForm(contract);
	contract.beSigned(bureau_1);
	bureau_1.signForm(contract);
	bureau_1.signForm(contract);
	return (0);
}