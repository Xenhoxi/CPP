/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/06 14:08:39 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Cat* cat = new Cat();
	const Dog* dog = new Dog();
	std::cout << "meta is a " << meta->getType() << std::endl;
	std::cout << "j is a " << j->getType() << std::endl;
	std::cout << "i is a " << i->getType() << std::endl;
	std::cout << "Cat is a " << cat->getType() << std::endl;
	std::cout << "Dog is a " << dog->getType() << std::endl;
    meta->makeSound();
	i->makeSound();
	j->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete meta;
	delete i;
	delete j;
	delete cat;
	delete dog;
	return 0;
}