/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:24:24 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/07 10:56:02 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp (void)
{
	std::time_t now;
	char time_str[18];

	now = std::time(nullptr);
	std::strftime(time_str, sizeof(time_str), "[%Y%m%d_%H%M%S]", std::localtime(&now));
	std::cout << time_str << " ";
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts ++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";depostis:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << '\n';
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << '\n';
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";nb_deposits:" << _nbDeposits << '\n';
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	if (_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused\n";
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << ";amount:" << _amount;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << '\n';
	return (true);
}
