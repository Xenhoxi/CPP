/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:54:49 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 00:37:57 by ljerinec         ###   ########.fr       */
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
			throw Form::GradeTooLowException();
		else if (grade < 1)
			throw Form::GradeTooLowException();
		else
			return (grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (150);
	}
	// return (grade);
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
