/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:01:36 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/17 23:22:10 by ialinaok         ###   ########.fr       */
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
_nbDeposits(1),
_nbWithdrawals(0) {

	this->_nbAccounts++;
	t::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;

	return ;
}

// Account::Account(int const amounts[], size_t amounts_size) {

// 	//idk honestly this makes just noooo sense
// }

Account::~Account(void) {

	std::cout << "Destructor Account called" << std::endl;

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

	for (int i = 0; i < t::getNbAccounts(); i++) {

		std::cout << "index:" << i << "amount:" << t::getTotalAmount();
		std::cout << 
		
	}
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

