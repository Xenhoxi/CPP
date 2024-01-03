/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:45:53 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/23 17:17:34 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
public:
	class GradeTooHighException : public std::exception 
	{
	private:
		std::string message;
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() _NOEXCEPT;
		virtual const char* what() const throw()
		{
			return ("Grade too High !"); 
		}
	};
	Bureaucrat(void);
	Bureaucrat(int grade);
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	int			getGrade(void);
	std::string	getName(void);
	void		promote(void);
	void		demote(void);
private:
	const std::string	_name;
	int					_grade;
};


#endif