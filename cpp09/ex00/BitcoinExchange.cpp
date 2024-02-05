/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:37:58 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/05 11:12:39 by ljerinec         ###   ########.fr       */
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

void	checkDate(std::string &date)
{
	float		year;
	float		month;
	float		day;
	std::string	save = date;

	year = atof(date.c_str());
	if (date.find("-") == date.npos || year < 2009 || year > 2023)
		throw ErrorMsg("Invalid date !");
	date.erase(0, date.find("-") + 1);
	month = atof(date.c_str());
	if (date.find("-") == date.npos || month < 1 || month > 12)
		throw ErrorMsg("Invalid date !");
	date.erase(0, date.find("-") + 1);
	day = atof(date.c_str());
	if (day < 1 || day > 31)
		throw ErrorMsg("Invalid date !");
	date = save;
}

void	checkAmount(std::string &amount)
{
	for (int i = 0; amount[i]; i++)
		if ((amount[i] < '0' || amount[i] > '9') && amount[i] != ' '
			&& amount[i] != '-' && amount[i] != '+' && amount[i] != '.')
			throw ErrorMsg("Amount is not a number !");
	if (atof(amount.c_str()) < 0)
		throw ErrorMsg("Amount is not a positiv !");
	if (atof(amount.c_str()) > 1000)
		throw ErrorMsg("Amount too large !");
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
	while (std::getline(ifs, buff))
	{
		try
		{
			if (buff.find("|") == buff.npos)
				throw BadInput();
			date = buff.substr(0, buff.find('|'));
			ammount = buff.substr(buff.find('|') + 1, buff.size());
			checkDate(date);
			checkAmount(ammount);
			date.erase(std::remove(date.begin(), date.end(), ' '), date.end());
			ammount.erase(std::remove(ammount.begin(), ammount.end(), ' '), ammount.end());
			FindInDataBase(dataBase, date, ammount);
		}
		catch (BadInput &e)
		{
			std::cout << "Error : " << e.what() << buff << std::endl;
		}
		catch (ErrorMsg &e)
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
