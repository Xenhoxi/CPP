/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:50:37 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/01 15:49:08 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

void	read_input(const char *filename, std::map<std::string, double> &dataBase)
{
	std::string		buff;
	std::string		date;
	std::string		ammount;
	std::ifstream	ifs(filename);

	if (!ifs.is_open())
		throw FileNotOpen();
	std::getline(ifs, buff);
	while (ifs)
	{
		try
		{
			std::getline(ifs, buff);
			if (buff.find("|") == buff.npos)
				throw BadInput();
			date = buff.substr(0, buff.find('|'));
			date = date.erase(date.find(" "), date.size());
			std::cout << date << std::endl;
			ammount = buff.substr(buff.find('|') + 1, buff.size());
			std::cout << "date : " << date << "|" << std::endl;
			if (dataBase.find(date.c_str()) != dataBase.end())
				std::cout << "Database value : " << dataBase.find(date.c_str())->second << std::endl;
		}
		catch (BadInput &e)
		{
			std::cout << "Error : " << e.what() << date << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error : " << e.what() << std::endl;
		}
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
}

int main(int argc, char **argv)
{
	std::map<std::string, double> dataBase;

	if (argc != 2)
		return (1);
	try
	{
		fill_dataBase(dataBase);
		read_input(argv[1], dataBase);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	return (0);
}