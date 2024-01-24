/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/17 15:25:46 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someIntern;
	Bureaucrat bureau_1("michel", 45);
	Bureaucrat bureau_2("Karen", 3);
	AForm *form_3 = new ShrubberyCreationForm("home");
	try
	{
		AForm	*form_2 = someIntern.makeForm("rootomy request", "Sam");
		bureau_2.signForm(*form_2);
		form_2->beSigned(bureau_2);
		form_2->execute(bureau_2);
	}
	catch (Intern::InexistantForm &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		AForm	*form_4 = someIntern.makeForm("presidential pardon", "Dog");
		bureau_2.signForm(*form_4);
		bureau_2.executeForm(*form_4);
	}
	catch (Intern::InexistantForm &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;
	form_3->execute(bureau_2);	
	return (0);
}