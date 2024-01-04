/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:33 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/03 13:24:52 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(int grade) : _grade(grade)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	return ;
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
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::demote(void)
{
	try 
	{
		if (this->_grade >= 150)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade++;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int Bureaucrat::getGrade(void)
{
	return (_grade);
}

std::string	Bureaucrat::getName(void)
{
	return (_name);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}
