/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:01:36 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/17 18:43:12 by apielasz         ###   ########.fr       */
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

Account::Account(int initial_deposit) { //tbd

	std::cout << "Constructor Account called" << std::endl;

	return ;
}

Account::Account(int const amounts[], )

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
		std::cout << "0" << 1 + ltm->tm_mon;
	else
		std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday <= 9)
		std::cout << "0" << ltm->tm_mday;
	else
		std::cout << ltm->tm_mday << "_";
	if (ltm->tm_hour <= 9)
		std::cout << "0" << ltm->tm_hour;
	else
		std::cout << ltm->tm_hour;
	if (ltm->tm_min <= 9)
		std::cout << "0" << ltm->tm_min;
	else
		std::cout << ltm->tm_min;
	if (ltm->tm_sec <= 9)
		std::cout << "0" << ltm->tm_sec;
	else
		std::cout << ltm->tm_sec;
	std::cout << "]" << "	";

	return ;
}

