/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:41:25 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/08 14:48:05 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class	Contact
{
public:
	Contact(void);
	~Contact(void);
	void	set_user(void);
	void	GetUser(void) const;
	int		GetIndex(void) const;
	int		GetNbContact(void) const;
	void	PrintUser(std::string str) const;
	void	PrintAllInfos(void) const;
private:
	int			_index;
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
	static	int	_NbContact;
};
