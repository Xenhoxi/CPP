/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:54:49 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 12:35:19 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

Form::Form(std::string name, const int sign_grade, const int exec_grade) : _name(name), _isSigned(0), _signGrade(Check(sign_grade)), _execGrade(Check(exec_grade))
{
	return ;
}

int Form::Check(int grade)
{
	try
	{
		if (grade > 150)
			throw Form::GradeTooLowException("Grade to Low at creation of the form !");
		else if (grade < 1)
			throw Form::GradeTooHighException("Grade to High at creation of the form !");
		else
			return (grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (150);
	}
}

void	Form::beSigned(Bureaucrat &someone)
{
	try
	{
		if (someone.getGrade() > _signGrade)
			throw Form::GradeTooLowException("Grade of the bureaucrat is to low to sign this form");
		else if (_isSigned == 0)
		{
			_isSigned = 1;
			std::cout << "Form signed !" << std::endl;
		}
		else
			std::cout << "Form already signed !" << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form::Form(void) : _signGrade(0), _execGrade(0)
{
	return ;
}

Form::~Form(void)
{
	return ;
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getIsSigned(void) const
{
	return (_isSigned);
}

int	Form::getSignGrade(void) const
{
	return (_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (_execGrade);
}

std::ostream &operator<<(std::ostream &out, const Form &rhs)
{
	out << rhs.getName() << ", Grade " << rhs.getSignGrade() << " require to sign and " << rhs.getExecGrade() << " to execute it.";
	return (out);
}
