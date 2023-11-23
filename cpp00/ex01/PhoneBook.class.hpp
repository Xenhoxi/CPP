/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:31:08 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/21 14:47:54 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <stdlib.h> 

#define START_MSG "----------- PHONE BOOK USAGE -----------\n|     ADD to create a new contact      |\n|  SEARCH for looking in your contact  |\n----------------------------------------\n";

class	PhoneBook 
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	SetContact(void);
	void	Search(void) const;
private:
	int		IsFreeContact(void) const;
	int		FindOldestContact(void) const;
	int		IsNumber(std::string str) const;
	Contact	MyContact[8];
};
