/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:31:08 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/07 13:05:59 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

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
	Contact	MyContact[8];
};
