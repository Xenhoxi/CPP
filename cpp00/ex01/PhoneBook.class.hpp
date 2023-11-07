/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.classe.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:31:08 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/03 19:53:48 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

class	PhoneBook 
{
public:
	PhoneBook(void);
	~PhoneBook(void);
private:
	Contact	MyContact[8];
};
