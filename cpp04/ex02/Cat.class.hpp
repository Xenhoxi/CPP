/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:36:01 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/11 11:27:51 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(const Cat &ref);
	virtual ~Cat(void);
	Cat& operator=(const Cat &rhs);
	void	makeSound(void) const;
private:
	Brain	*_brain;
};

#endif
