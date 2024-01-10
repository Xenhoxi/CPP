/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/09 14:41:56 by ljerinec         ###   ########.fr       */
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
	Bureaucrat bureau_1("michel", 45);
	Bureaucrat bureau_2("Karen", 3);
	AForm *form_1 = new RobotomyRequestForm("Con");
	AForm *form_2 = new PresidentialPardonForm("Arthur");
	AForm *form_3 = new ShrubberyCreationForm("home");

	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;

	form_1->beSigned(bureau_1);
	bureau_1.signForm(*form_1);
	form_1->beSigned(bureau_1);
	form_1->execute(bureau_1);

	bureau_2.signForm(*form_2);
	form_2->execute(bureau_2);

	bureau_2.signForm(*form_3);
	form_3->execute(bureau_2);

	return (0);
}