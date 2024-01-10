/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:38:02 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/09 14:23:10 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm(NULL, 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade())
{
	*this = src;
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void) rhs;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45)
{
	return ;
}

void	RobotomyRequestForm::executeForm() const
{
	int	random_value;

	std::srand(std::time(0));
	std::cout << "VRRRRRRRR! BRRRRRRR! ZZZZZZZZZ! WHIRRRRRR! ";
	random_value = std::rand();
	random_value = random_value % 2;
	if (random_value == 1)
		std::cout << "Robotomy succesfully done !" << std::endl;
	else
		std::cout << "Robotomy failed ..." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}