/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:04:30 by ialinaok          #+#    #+#             */
/*   Updated: 2023/05/07 01:19:16 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _deque(), _list() {}

PmergeMe::PmergeMe(PmergeMe const & src) {
	
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs) {

	if (this != &rhs) {
		this->_deque = rhs._deque;
		this->_list = rhs._list;
	}
	return (*this);
}

bool	PmergeMe::checkInts(std::string input) {
	
}