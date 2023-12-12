/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:04:02 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/12 10:42:27 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int	main(void)
{
	const Animal* farm[4];
	for (int i = 0; i < 2; i++)
		farm[i] = new Dog();
	for (int i = 2; i < 4; i++)
		farm[i] = new Cat();
	std::cout << std::endl; 
	for (int i = 0; i < 4; i++)
		delete farm[i];
	std::cout << std::endl; 

	Dog dog;
	{
		std::cout << "Dog is a " << dog.getType() << std::endl;
		dog.makeSound();
		Dog i = dog;
		i.makeSound();
	}
	dog.makeSound();
	std::cout << "Dog is a " << dog.getType() << std::endl;

	return 0;
}
