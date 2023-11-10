/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:38:43 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/10 15:27:47 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iomanip>
#include <iostream>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string name);
private:
	std::string	_name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif
