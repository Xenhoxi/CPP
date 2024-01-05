/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:53 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 13:51:02 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.class.hpp"

class Form;

class Bureaucrat
{
public:
	class GradeTooHighException : public std::exception 
	{
	public:
		virtual const char* what() const throw() {
			return ("Grade too High !"); 
		}
	};
	class GradeTooLowException : public std::exception 
	{
	public:
		virtual const char* what() const throw() {
			return ("Grade too Low !"); 
		}
	};
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	~Bureaucrat(void);
	int			getGrade(void) const;
	std::string	getName(void) const;
	void		promote(void);
	void		demote(void);
	void		signForm(Form &form);
private:
	Bureaucrat(void);
	const std::string	_name;
	int					_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif