/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:27:36 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/09 14:45:21 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.class.hpp" 
#include "fstream"

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	virtual void	executeForm() const;
private:
	ShrubberyCreationForm();
};

#endif