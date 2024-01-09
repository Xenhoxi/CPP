/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/09 13:21:01 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	// Bureaucrat bureau_1("michel", 1500);
	// Bureaucrat bureau_1("michel", 0);
	Bureaucrat bureau_1("michel", 15);
	Bureaucrat bureau_2("Karen", 50);
	AForm *contract = new RobotomyRequestForm("Con");

	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;
	// std::cout << contract << std::endl;
	// contract.beSigned(bureau_2);
	contract->beSigned(bureau_1);
	bureau_1.signForm(*contract);
	contract->beSigned(bureau_1);
	contract->execute(bureau_1);
	return (0);
}