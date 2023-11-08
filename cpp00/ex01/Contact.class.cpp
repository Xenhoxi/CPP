/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:48:17 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/08 11:58:39 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int Contact::_NbContact = 0;

Contact::Contact(void) 
{
	this->_index = -1;
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
	this->_index = this->GetNbContact();
	Contact::_NbContact++;
	std::cout << "Firstname : ";
	std::cin >> this->_firstname;
	std::cout << "Lastname : ";
	std::cin >> this->_lastname;
	std::cout << "Nickname : ";
	std::cin >> this->_nickname;
	std::cout << "Phone number : ";
	std::cin >> this->_phone;
	std::cout << "Darkest secret : ";
	std::cin >> this->_secret;
	std::cout << "Contact created !" << std::endl;
}

void	Contact::GetUser(void) const
{
	std::cout << std::right << std::setw(10) << this->_index  << "|";
	std::cout << std::right << std::setw(10) << this->_firstname << "|";
	std::cout << std::right << std::setw(10) << this->_lastname << "|";
	std::cout << std::right << std::setw(10) << this->_nickname << std::endl;
}

int Contact::GetNbContact(void) const
{
	return (Contact::_NbContact);
}
