/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:41:25 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/02 23:47:32 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Contact
{
public:
	Contact(void);
	~Contact(void);
private:
	char	*firstname;
	char	*lastname;
	char	*nickname;
	char	*phone;
	char	*secret;
};