/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:00:26 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/10 14:08:07 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern &src)
{
	*this = src;
    return ;
}

Intern &Intern::operator=(const Intern &rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

AForm &Intern::makeForm(std::string type, std::string target)
{
	// comme l'ex04 de cpp01 et creer 3 methodes membres.
}

Intern::~Intern()
{
	return ;
}