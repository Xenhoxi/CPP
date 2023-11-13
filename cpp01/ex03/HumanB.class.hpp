/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:17:24 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/13 21:09:41 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.class.hpp"
#include <iostream>
#include <iomanip>

class	HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);
	void		attack(void);
	void		setWeapon(Weapon weapon);
private:
	std::string	_name;
	Weapon		_weapon;
};

#endif
