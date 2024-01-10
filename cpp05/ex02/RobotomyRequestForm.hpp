/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:30:33 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/09 14:10:51 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.class.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);
	~RobotomyRequestForm();
	virtual void	executeForm() const;
private:
	RobotomyRequestForm();
};

#endif
