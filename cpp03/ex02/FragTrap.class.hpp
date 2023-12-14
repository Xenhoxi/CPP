/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:04:47 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/14 13:34:46 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include "FragTrap.class.hpp"
#include "ClapTrap.class.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &ref);
	FragTrap &operator=(const FragTrap &rhs);
	~FragTrap(void);
	void	highFiveGuys(void);
};

#endif
