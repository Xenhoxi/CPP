/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:16:39 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/13 21:05:17 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include "Weapon.class.hpp"
#include <iostream>
#include <iomanip>

class	HumanA
{
public:
	HumanA(std::string name, Weapon weapon);
	~HumanA(void);
	void		attack(void);
private:
	std::string	_name;
	Weapon		_weapon;
};

#endif
