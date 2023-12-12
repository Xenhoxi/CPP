/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:31:07 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/11 12:30:55 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Animal
{
public:
	Animal(void);
	Animal(const Animal &ref);
	virtual ~Animal(void);
	Animal& operator=(const Animal &rhs);
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
protected:
	std::string	_type;
};

#endif
