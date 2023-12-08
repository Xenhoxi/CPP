/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:36:01 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/08 16:40:40 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
#include "Animal.class.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	virtual ~Cat(void);
	void	makeSound(void) const;
};

#endif
