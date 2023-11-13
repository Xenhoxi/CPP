/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:11:04 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/13 21:11:58 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <iomanip>

class	Weapon
{
public:
	Weapon(std::string _type);
	~Weapon(void);
	void				setType(std::string newtype);
	const std::string&	getType(void);
private:
	std::string			_type;
};

#endif