/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:34:25 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/11 11:27:26 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog &ref);
	virtual ~Dog(void);
	Dog& operator=(const Dog &rhs);
	void	makeSound(void) const;
private:
	Brain	*_brain;
};

#endif
