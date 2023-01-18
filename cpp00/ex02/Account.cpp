/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:01:36 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/18 19:28:19 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

#include <functional>
#include <string>
#include <iterator>
#include <iostream>
#include <ctime>

//these are static - they track the number of deposits, amounts and withdrawals
//between a l l accounts that were created.

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* ok, so this will be called everytime a new account is made
I need to assign an index, and this needs to be sth that's increasing
everytime I create this obj - STATIC! use NbAccounts to track that
then, I will also need to use initial_deposit somewhere, but idk if I can 
us it already at the initialization list
does the first deposit count as a deposit? I guess so, then Nb deposits is 1
and set _nbWithdrawals to zero. let's tryyy
ahh also I guess from the log message I can see the format of the messages outputted?
*/

Account::Account(int initial_deposit) :
_accountIndex(this->_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0) {

	this->_nbAccounts++;
	_totalAmount += initial_deposit;
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;

	return ;
}

Account::~Account(void) {

	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;

	return ;
}

int	Account::getNbAccounts(void) {

	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {

	return (_totalAmount);
}

int	Account::getNbDeposits(void) {

	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {

	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) { //tbd

	t::_displayTimestamp();
	std::cout << "accounts:" << t::_nbAccounts << ";total:" << t::_totalAmount;
	std::cout << ";deposits:" << t::_totalNbDeposits << ";withdrawals:" << t::_totalNbWithdrawals;
	std::cout << std::endl;

	return ;
}

void	Account::makeDeposit(int deposit) {

	this->_nbDeposits++;
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;

	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {

	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (this->_amount - withdrawal >= 0) {

		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
		std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}

int	Account::checkAmount(void) const {

	return (this->_amount);
}

void	Account::displayStatus(void) const {

	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp(void) {

	time_t	now = time(0);

	tm	*ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year;
	if (1 + ltm->tm_mon <=9)
		std::cout << "0";
	std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday <= 9)
		std::cout << "0";
	std::cout << ltm->tm_mday << "_";
	if (ltm->tm_hour <= 9)
		std::cout << "0";
	std::cout << ltm->tm_hour;
	if (ltm->tm_min <= 9)
		std::cout << "0";
	std::cout << ltm->tm_min;
	if (ltm->tm_sec <= 9)
		std::cout << "0";
	std::cout << ltm->tm_sec << "]" << " ";

	return ;
}

