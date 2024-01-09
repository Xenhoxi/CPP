/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:31:04 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/09 13:17:30 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.class.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &src);
	~PresidentialPardonForm();
	virtual void	executeForm();
private:
	PresidentialPardonForm();
};

#endif
