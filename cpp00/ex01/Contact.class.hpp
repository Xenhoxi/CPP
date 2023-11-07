/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:41:25 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/04 20:49:35 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Contact
{
public:
	Contact(void);
	~Contact(void);
	char	*get_info(char *str);
	void	set_user(void);
	void	get_user(void) const;
private:
	int			index;
	char		*_firstname;
	char		*_lastname;
	char		*_nickname;
	char		*_phone;
	char		*_secret;
};
