/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:00:26 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/17 15:11:21 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Created !" << std::endl;
}

Intern::Intern(const Intern &src)
{
	*this = src;
    return ;
}

Intern &Intern::operator=(const Intern &rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

AForm *Intern::makeShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makePresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string type, std::string target)
{
	AForm *(Intern::*arrayPtr[3])(std::string target) = {&Intern::makeShrubberyCreation, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon};
	std::string	arrayStr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (type == arrayStr[i])
			return (this->*arrayPtr[i])(target);
	}
	throw Intern::InexistantForm();
}

Intern::~Intern()
{
	return ;
}