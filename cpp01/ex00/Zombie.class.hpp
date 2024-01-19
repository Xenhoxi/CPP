/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:38:43 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/10 15:15:17 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
