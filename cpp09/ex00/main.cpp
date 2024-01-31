/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:50:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/31 14:49:41 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// static void	check_file(char *path)
// {
// 	std::ifstream	ifs;

// 	ifs.open(path);
// 	if (!ifs.is_open())
// 		throw FileError();
// 	parse_file(ifs);
// }

// static void	parse_file(std::ifstream &ifs)
// {
// 	std::string		buff;

// 	std::getline(ifs, buff);
	// Tant que ifs/buff
		// check si il y a un pipe
		// split sur le pipe
		// check si le split donne 2 resultat
		// check si split[0] est une date et qu'elle soit valide
		//		- sinon throw error
		// check si split[1] est un ammount et entre 0 et 1000
		//		- sinon throw error
		// Ajouter les donnees a la map
	//
// }

int main(int argc, char **argv)
{
	std::map<std::string, int> input;

	if (argc != 2)
		return (1);
	try
	{
		// check_file(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	return (0);
}