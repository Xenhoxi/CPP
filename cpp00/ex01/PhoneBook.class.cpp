/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:34:41 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/08 00:42:42 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::IsFreeContact(void) const
{
	int	i = -1;

	while (++i < 8)
	{
		if (this->MyContact[i].GetIndex() == -1)
			return (i);
	}
	return (-1);
}

int	PhoneBook::FindOldestContact(void) const
{
	int	i = -1;

	while (++i < 8)
	{
		if (this->MyContact[i].GetIndex() == 0)
			return (i);
	}
	return (-1);
}

void	PhoneBook::SetContact(void)
{
	int	index;

	index = this->IsFreeContact();
	if (index == -1)
		index = this->FindOldestContact();
	this->MyContact[index].set_user();
}

void	PhoneBook::Search(void) const
{
	int	i = -1;

	while (++i < 8)
	{
		if (this->MyContact[i].GetIndex() >= 0)
			this->MyContact[i].GetUser();
	}
}
