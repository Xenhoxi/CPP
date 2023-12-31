/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:48:17 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/29 11:27:16 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int Contact::_NbContact = -1;

Contact::Contact(void) : _index(-1)
{
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
	Contact::_NbContact++;
	if (Contact::_NbContact >= 8)
		this->_NbContact = 0;
	this->_index = this->GetNbContact();
	std::cout << "Firstname : ";
	std::getline(std::cin, this->_firstname);
	std::cout << "Lastname : ";
	std::getline(std::cin, this->_lastname);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Phone number : ";
	std::getline(std::cin, this->_phone);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->_secret);
	std::cout << "Contact created !" << std::endl;
}

void	Contact::GetUser(void) const
{
	std::cout << std::right << std::setw(10) << this->_index  << "|";
	this->PrintUser(this->_firstname);
	std::cout << "|";
	this->PrintUser(this->_lastname);
	std::cout << "|";
	this->PrintUser(this->_nickname);
	std::cout << std::endl;
}

void	Contact::PrintUser(std::string str) const
{
	if (str.length() <= 9)
		std::cout << std::right << std::setw(10) << str.substr(0, 10);
	else
		std::cout << std::right << std::setw(9) << str.substr(0, 9) << ".";
}

void	Contact::PrintAllInfos(void) const
{
	std::cout << "Index : " << this->_index << std::endl;
	std::cout << "Firstname : " << this->_firstname << std::endl;
	std::cout << "Lastname : " << this->_lastname << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone number : " << this->_phone << std::endl;
	std::cout << "Darkest secret : " << this->_secret << std::endl;
}

int Contact::GetNbContact(void) const
{
	return (Contact::_NbContact);
}

void	Contact::ReduceIndex(void)
{
	this->_index--;
}
