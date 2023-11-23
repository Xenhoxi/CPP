/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:34:41 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/10 21:03:48 by ljerinec         ###   ########.fr       */
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
		if (this->MyContact[i].GetIndex() == this->MyContact->GetNbContact())
		{
			if (i + 1 < 7)
				return (i + 1);
			else
				return (0);
		}
	}
	return (-1);
}

void	PhoneBook::SetContact(void)
{
	int	i = -1;
	int	index;

	index = this->IsFreeContact();
	if (index == -1)
		index = this->FindOldestContact();
	this->MyContact[index].set_user();
	if (this->MyContact->GetNbContact() == 8)
		while (++i < 8)
			this->MyContact[i].ReduceIndex();
}

int	PhoneBook::IsNumber(std::string str) const
{
	int	i = -1;

	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

void	PhoneBook::Search(void) const
{
	int	i = -1;
	std::string input;
	int	intInput = 0;

	while (++i < 8)
	{
		if (this->MyContact[i].GetIndex() >= 0)
			this->MyContact[i].GetUser();
	}
	std::cout << "Enter the index of the Contact to display : ";
	std::cin >> input;

	if (this->IsNumber(input))
	{
		intInput = atoi(input.c_str());
		if (intInput < 8 && intInput >= 0)
		{
			if (MyContact[intInput].GetIndex() == -1)
			{
				std::cout << "Invalid index !" << std::endl;
				return ;
			}
			MyContact[intInput].PrintAllInfos();
			return ;
		}
	}
	std::cout << "Invalid Index !" << std::endl;
}
