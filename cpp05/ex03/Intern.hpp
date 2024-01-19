/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:00:31 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/17 14:51:29 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "AForm.class.hpp"

class Intern
{
public:
    class InexistantForm : public std::exception 
	{
	public:
		virtual const char* what() const throw() {
			return ("Intern try to create a inexistante type of Form !"); 
		}
	};
    Intern(void);
    Intern(const Intern &src);
    Intern &operator=(const Intern &src);
    ~Intern();
    AForm *makePresidentialPardon(std::string target);
    AForm *makeRobotomyRequest(std::string target);
    AForm *makeShrubberyCreation(std::string target);
    AForm *makeForm(std::string type, std::string target);
};