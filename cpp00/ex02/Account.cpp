/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:36:35 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/09 17:07:44 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t		date;
	struct tm	datetime;
	char		format[18];

	date = time(NULL);
	datetime = *localtime(&date);
	strftime(format, 17, "[%Y%m%d_%H%M%S]", &datetime);
	std::cout << format << " ";
}

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ":";
	std::cout << "ammout:" << this->_amount << ":";
	std::cout << "created" << std::endl;
	_accountIndex = Account::_nbAccounts;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) << ":";
	std::cout << "ammout:" << this->_amount << ":";
	std::cout << "created" << std::endl;
	Account::_nbAccounts--;
	return ;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount += withdrawal;
	Account::_totalNbWithdrawals++;
	return (1);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ":";
	std::cout << "amount:" << this->_amount << ":";
	std::cout << "deposits:" << this->_nbDeposits << ":";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}
