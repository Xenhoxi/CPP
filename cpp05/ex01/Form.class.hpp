/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:47:21 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 00:35:58 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP

#include <string>
#include <iostream>

class Form
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
	Form(std::string name, const int _sign_grade, const int _exec_grade);
	Form(const Form &src);
	Form &operator=(const Form &src);
	~Form();
	std::string	getName(void) const;
	bool		getIsSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;
private:
	Form();
	int	Check(int grade);
	const std::string	_name;
	bool				_isSigned;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &rhs);

#endif
