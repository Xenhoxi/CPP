/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:48:17 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/07 14:42:02 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

int Contact::_NbContact = 0;

Contact::Contact(void) 
{
	this->_index = -1;
	// this->_firstname = NULL;
	this->_lastname = NULL;
	this->_nickname = NULL;
	this->_phone = NULL;
	this->_secret = NULL;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int	Contact::GetIndex(void) const
{
	return (this->_index);
}

void	Contact::set_user(void)
{
	char	buffer[512];

	this->_index = this->GetNbContact();
	Contact::_NbContact++;
	std::cout << "firstname : ";
	std::cin >> buffer;
	std::strcpy(this->_firstname, buffer);
}

void	Contact::GetUser(void) const
{
	std::cout << this->_index << std::endl;
	std::cout << this->_firstname << std::endl;
}

int Contact::GetNbContact(void) const
{
	return (Contact::_NbContact);
}
