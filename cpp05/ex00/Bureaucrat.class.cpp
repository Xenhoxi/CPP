/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:33 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 00:27:03 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
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

void	Bureaucrat::promote(void)
{
	try 
	{
		if (this->_grade <= 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
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
			this->_grade++;
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
