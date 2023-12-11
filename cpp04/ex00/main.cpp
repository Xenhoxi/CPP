/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/11 10:36:04 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	std::cout << "meta is a " << meta->getType() << std::endl;
    meta->makeSound();
	delete meta;

	const Animal* j = new Dog();
	j->makeSound();
	std::cout << "j is a " << j->getType() << std::endl;
	delete j;

	const Animal* i = new Cat();
	i->makeSound();
	std::cout << "i is a " << i->getType() << std::endl;
	delete i;

	const Cat* cat = new Cat();
	std::cout << "Cat is a " << cat->getType() << std::endl;
	cat->makeSound();
	delete cat;

	const Dog* dog = new Dog();
	std::cout << "Dog is a " << dog->getType() << std::endl;
	dog->makeSound();
	delete dog;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	wrongAnimal->makeSound();
	delete wrongAnimal;
	
	const WrongAnimal* wrongCat = new WrongCat();
	wrongCat->makeSound();
	delete wrongCat;

	return 0;
}
