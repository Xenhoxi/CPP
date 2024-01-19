/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:08:31 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/11 11:14:21 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat &ref);
	~WrongCat(void);
	WrongCat& operator=(const WrongCat &rhs);
	void makeSound(void) const;
};

#endif
