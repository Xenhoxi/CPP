/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:48:17 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/04 20:49:55 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(void) 
{
	std::cout << "Instance of Contact Created" << std::endl;
	this->index = 0;
	this->_firstname = NULL;
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

char	*Contact::get_info(char *str)
{
	char buff[128];

	std::cout << str << std::endl;
	std::cin >> buff;
	return (buff);
}

void	Contact::set_user(void)
{
	this->_firstname = this->get_info("First name : ");
}