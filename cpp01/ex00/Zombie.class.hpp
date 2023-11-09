/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:38:43 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/09 23:40:27 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
private:
	std::string	_name;
};
