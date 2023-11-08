/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:31:08 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/08 15:02:57 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

#define START_MSG "----------- PHONE BOOK USAGE -----------\n|     ADD to create a new contact      |\n|  SEARCH for looking in your contact  |\n----------------------------------------\n";

class	PhoneBook 
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	SetContact(void);
	int		IsFreeContact(void) const;
	int		FindOldestContact(void) const;
	void	Search(void) const;
private:
	int		IsNumber(const char *str) const;
	Contact	MyContact[8];
};
