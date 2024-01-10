/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:30:33 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/10 11:16:59 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.class.hpp"
#include "stdlib.h"
#include "time.h"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);
	~RobotomyRequestForm();
	virtual void	executeForm() const;
	std::string		getTarget(void) const;
private:
	RobotomyRequestForm();
	std::string	_target;
};

#endif
