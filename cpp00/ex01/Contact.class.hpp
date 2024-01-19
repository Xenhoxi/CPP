/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:41:25 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/27 11:54:33 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

class	Contact
{
public:
	Contact(void);
	~Contact(void);
	void	GetUser(void) const;
	void	set_user(void);
	int		GetIndex(void) const;
	int		GetNbContact(void) const;
	void	ReduceIndex(void);
	void	PrintAllInfos(void) const;
private:
	void	PrintUser(std::string str) const;

	int			_index;
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
	static	int	_NbContact;
};
