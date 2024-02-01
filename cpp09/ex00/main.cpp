/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:50:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/01 14:36:08 by ljerinec         ###   ########.fr       */
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

void	print_map(std::map<std::string, double> &dataBase)
{
	std::map<std::string, double>::iterator it;
	std::map<std::string, double>::iterator ite = dataBase.end();
	for (it = dataBase.begin(); it != ite; ++it)
	{
		std::cout << it->first << " ";
		std::cout << it->second << std::endl;
	}
}

void	fill_dataBase(std::map<std::string, double> &dataBase)
{
	std::string		buff;
	std::string		date;
	std::string		ammount;
	std::ifstream	ifs("data.csv");

	if (!ifs.is_open())
		throw FileNotOpen();
	std::getline(ifs, buff);
	while (ifs)
	{
		std::getline(ifs, buff);
		date = buff.substr(0, buff.find(','));
		ammount = buff.substr(buff.find(',') + 1, buff.size());
		dataBase.insert(std::pair<std::string, double>(date, atof(ammount.c_str())));
	}
	print_map(dataBase);
}

int main(int argc, char **argv)
{
	(void) argv;
	std::map<std::string, double> dataBase;

	if (argc != 2)
		return (1);
	try
	{
		fill_dataBase(dataBase);
		// check_file(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	return (0);
}