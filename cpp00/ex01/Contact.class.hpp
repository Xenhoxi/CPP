/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:41:25 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/07 14:41:57 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Contact
{
public:
	Contact(void);
	~Contact(void);
	void	set_user(void);
	void	GetUser(void) const;
	int		GetIndex(void) const;
	int		GetNbContact(void) const;
private:
	int			_index;
	char		_firstname[512];
	char		_lastname[512];
	char		_nickname[512];
	char		_phone[512];
	char		_secret[512];
	static	int	_NbContact;
};
