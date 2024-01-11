/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:33 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/11 14:28:34 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName())
{
	*this = src;
    return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(150)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(AForm &form)
{
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(AForm const &form)
{
	form.execute(*this);
}

void	Bureaucrat::promote(void)
{
	try
	{
		if (_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade -= 1;
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::demote(void)
{
	try
	{
		if (_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade += 1;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int Bureaucrat::getGrade(void) const 
{
	return (_grade);
}

std::string	Bureaucrat::getName(void) const 
{
	return (_name);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (out);
}
