/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:47:21 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/05 14:23:10 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_CLASS_HPP
#define AFORM_CLASS_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.class.hpp"

class Bureaucrat;

class AForm
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
	class FormAlreadySign : public std::exception 
	{
		const char *_message;
	public:
		FormAlreadySign(const char *msg) : _message(msg) {}
		virtual const char* what() const throw() {
			return (_message); 
		}
	};
	AForm(std::string name, const int _sign_grade, const int _exec_grade);
	AForm(const AForm &src);
	AForm &operator=(const AForm &src);
	~AForm();
	std::string		getName(void) const;
	bool			getIsSigned(void) const;
	int				getSignGrade(void) const;
	int				getExecGrade(void) const;
	void			beSigned(Bureaucrat &someone);
	void			execute(Bureaucrat const &executor) const;
	virtual	void	executeForm() const = 0;
private:
	AForm();
	int		Check(int grade);
	const std::string	_name;
	bool				_isSigned;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream &operator<<(std::ostream &out, const AForm &rhs);

#endif
