/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:30:33 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/08 14:24:46 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.class.hpp"

class RobotomyRequestForm : AForm
{
public:
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);
	~RobotomyRequestForm();
	virtual void	execute(Bureaucrat const &executor) const;
private:
	RobotomyRequestForm();
};

#endif
