/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:36:01 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/06 13:56:22 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	~Cat(void);
	void	makeSound(void) const;
};