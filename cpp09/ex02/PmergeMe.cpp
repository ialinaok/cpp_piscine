/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:04:30 by ialinaok          #+#    #+#             */
/*   Updated: 2023/05/07 18:08:53 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _deque(), _list() {}

PmergeMe::PmergeMe(PmergeMe const & src) {
	
	*this = src;
}

PmergeMe::PmergeMe(char **input) {

	if (!this->checkInts(input))
		throw std::invalid_argument("Wrong input");
}

PmergeMe::~PmergeMe() {}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs) {

	if (this != &rhs) {
		this->_deque = rhs._deque;
		this->_list = rhs._list;
		this->_timeInputCheck = rhs._timeInputCheck;
	}
	return (*this);
}

bool	PmergeMe::checkInts(char **input) {

	// std::clock_t	startInputCheck = std::clock();
	
	struct timeval begin, end;
	gettimeofday(&begin, 0);

	for (int i = 0; input[i] != NULL; ++i) {
		long	tmp = std::atol(input[i]);
		if (tmp < 0) {
			std::cerr << RED "Error: only positive integers are accepted." D << std::endl;
			return (false);
		}
		else if (tmp > INT_MAX) {
			std::cerr << RED "Error: input integer is bigger than INT_MAX." D << std::endl;
			return (false);
		}
		this->_list.push_back(static_cast<int>(tmp));
		this->_deque.push_back(static_cast<int>(tmp));
	}
	// this->_timeInputCheck = std::clock() - startInputCheck;
	// std::cout << YELL "time: " D << std::fixed << std::setprecision(0) << 1000000 * (double)this->_timeInputCheck / CLOCKS_PER_SEC << "us" << std::endl;
//** this is just to print
	// std::cout << GREEN "list: " D << std::endl;
	// printContainer(this->_list);
	// std::cout << PU "deque: " D << std::endl;
	// printContainer(this->_deque);

	gettimeofday(&end, 0);
	long seconds = end.tv_sec - begin.tv_sec;
	long microseconds = end.tv_usec - begin.tv_usec;
	this->_timeInputCheck = seconds + microseconds*1e-6;
	// std::cout << YELL "time: " D << std::fixed << std::setprecision(10)  << this->_timeInputCheck << " seconds." D << std::endl;

	return (true);
}

void	PmergeMe::letsGo(void) {

	std::cout << BLU "Before: " D;
	printContainer(this->_list);
	std::cout << std::endl;

	
}