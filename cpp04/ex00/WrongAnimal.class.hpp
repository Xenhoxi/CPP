/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:08:55 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/08 16:39:02 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_CLASS_HPP
# define WRONG_ANIMAL_CLASS_HPP

#include <string>
#include <iomanip>
#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &ref);
	virtual ~WrongAnimal(void);
	WrongAnimal& operator=(const WrongAnimal &rhs);
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
protected:
	std::string	_type;
};

#endif
