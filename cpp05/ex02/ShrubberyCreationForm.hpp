/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:27:36 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/08 14:24:55 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.class.hpp" 

class ShrubberyCreationForm : AForm
{
public:
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	virtual void	execute(Bureaucrat const &executor) const;
private:
	ShrubberyCreationForm();
};

#endif
