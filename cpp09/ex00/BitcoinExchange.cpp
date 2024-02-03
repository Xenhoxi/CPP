/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:37:58 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/04 00:03:35 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	FindInDataBase(std::map<std::string, double> &dataBase, std::string &date, std::string &ammount)
{
	std::map<std::string, double>::iterator it;
	std::map<std::string, double>::iterator ite = dataBase.end();
	std::map<std::string, double>::iterator itprev;
	for (it = dataBase.begin(); it != ite; ++it)
	{
		if (it->first == date)
		{
			std::cout << date << " => " << atof(ammount.c_str()) << " = " << atof(ammount.c_str()) * it->second << std::endl;
			break ;
		}
		if (it->first > date)
		{
			std::cout << date << " => " << atof(ammount.c_str()) << " = " << atof(ammount.c_str()) * itprev->second << std::endl;
			break ;
		}
		itprev = it;
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
			if (buff.find("|") == buff.npos)
				throw BadInput();
			date = buff.substr(0, buff.find('|'));
			date = date.erase(date.find(" "), date.size());
			ammount = buff.substr(buff.find('|') + 1, buff.size());
			if (atof(ammount.c_str()) < 0)
				throw NotPositive();
			if (atof(ammount.c_str()) > 1000)
				throw AmountTooHigh();
			FindInDataBase(dataBase, date, ammount);
		}
		catch (BadInput &e)
		{
			std::cout << "Error : " << e.what() << buff << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error : " << e.what() << std::endl;
		}
		std::getline(ifs, buff);
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
