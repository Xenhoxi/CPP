/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:47:21 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 13:32:34 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form
{
public:
	class GradeTooHighException : public std::exception 
	{
		const char *_message;
	public:
		GradeTooHighException(const char *msg) : _message(msg) {}
		virtual const char* what() const throw() {
			return (_message);
		}
	};
	class GradeTooLowException : public std::exception 
	{
		const char *_message;
	public:
		GradeTooLowException(const char *msg) : _message(msg) {}
		virtual const char* what() const throw() {
			return (_message); 
		}
	};
	Form(std::string name, const int _sign_grade, const int _exec_grade);
	Form(const Form &src);
	Form &operator=(const Form &src);
	~Form();
	std::string	getName(void) const;
	bool		getIsSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;
	void		beSigned(Bureaucrat &someone);
private:
	Form();
	int		Check(int grade);
	const std::string	_name;
	bool				_isSigned;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &rhs);

#endif
