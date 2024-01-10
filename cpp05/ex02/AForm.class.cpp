/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:54:49 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 13:55:54 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.class.hpp"

AForm::AForm(std::string name, const int sign_grade, const int exec_grade) : _name(name), _isSigned(0), _signGrade(Check(sign_grade)), _execGrade(Check(exec_grade))
{
	return ;
}

AForm::AForm(const AForm &src) : _name(src.getName()), _signGrade(Check(src.getSignGrade())), _execGrade(Check(src.getExecGrade()))
{
	*this = src;
    return ;
}

AForm &AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->_isSigned = rhs._isSigned;
	return (*this);
}

int AForm::Check(int grade)
{
	try
	{
		if (grade > 150)
			throw AForm::GradeTooLowException("Grade to Low at creation of the Aform !");
		else if (grade < 1)
			throw AForm::GradeTooHighException("Grade to High at creation of the Aform !");
		else
			return (grade);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (150);
	}
}

void	AForm::beSigned(Bureaucrat &someone)
{
	try
	{
		if (someone.getGrade() > _signGrade)
			throw AForm::GradeTooLowException("Grade of the bureaucrat is to low to sign this Aform");
		else if (_isSigned == 0)
		{
			_isSigned = 1;
			std::cout << someone.getName() << " signed " << this->getName() << std::endl;
		}
		else
			std::cout << someone.getName() << " couldn't sign " << this->getName() << " because it already got signed" << std::endl;
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	AForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!this->getIsSigned())
			throw AForm::GradeTooHighException("Form is not signed");
		else if (executor.getGrade() > this->getExecGrade())
			throw AForm::GradeTooLowException("Grade's executor is to low");
		else
			executeForm();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

AForm::AForm(void) : _signGrade(0), _execGrade(0)
{
	return ;
}

std::string	AForm::getName(void) const
{
	return (_name);
}

bool	AForm::getIsSigned(void) const
{
	return (_isSigned);
}

int	AForm::getSignGrade(void) const
{
	return (_signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (_execGrade);
}

AForm::~AForm(void)
{
	return ;
}

std::ostream &operator<<(std::ostream &out, const AForm &rhs)
{
	out << rhs.getName() << ", Grade " << rhs.getSignGrade() << " require to sign and " << rhs.getExecGrade() << " to execute it.";
	return (out);
}
