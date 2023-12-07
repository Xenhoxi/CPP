/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:34:25 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/06 13:56:26 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	~Dog(void);
	void	makeSound(void) const;
};