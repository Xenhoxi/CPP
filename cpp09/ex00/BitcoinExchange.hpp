/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:37:56 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/03 23:52:19 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <stack>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <exception>
#include "limits.h"

void	read_input(const char *filename, std::map<std::string, double> &dataBase);
void	fill_dataBase(std::map<std::string, double> &dataBase);

class FileNotOpen : public std::exception 
{
public:
    virtual const char *what() const throw()
    {
        return ("File does not exist or cannot be open !");
    }
};

class BadInput : public std::exception 
{
public:
    virtual const char *what() const throw()
    {
        return ("bad input => ");
    }
};

class AmountTooHigh : public std::exception 
{
public:
    virtual const char *what() const throw()
    {
        return ("too large number.");
    }
};

class NotPositive : public std::exception 
{
public:
    virtual const char *what() const throw()
    {
        return ("Not a positiv number.");
    }
};

#endif