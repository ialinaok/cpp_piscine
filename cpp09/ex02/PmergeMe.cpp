/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:04:30 by ialinaok          #+#    #+#             */
/*   Updated: 2023/05/10 13:38:22 by apielasz         ###   ########.fr       */
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
		this->_timeInputCheck = rhs._timeInputCheck;
	}
	return (*this);
}

PmergeMe::PmergeMe(char **input) {

	double	startInputCheck = getTime();

	int i;
	for (i = 0; input[i] != NULL; ++i) {
		long	tmp = std::atol(input[i]);
		if (tmp <= 0) {
			std::cerr << RED "Error: only positive integers are accepted." D << std::endl;
			throw std::invalid_argument("Wrong input");
		}
		else if (tmp > INT_MAX) {
			std::cerr << RED "Error: input integer is bigger than INT_MAX." D << std::endl;
			throw std::invalid_argument("Wrong input");
		}
		this->_list.push_back(static_cast<int>(tmp));
		this->_deque.push_back(static_cast<int>(tmp));
	}
	_K = (i / 4 > 2) ? (i / 4) : 2;
	_timeInputCheck = getTime() - startInputCheck;
}

void	PmergeMe::letsGo(void) {

	std::cout << std::endl << YELL "Before:\t" D;
	printContainer(_list);
	std::cout << std::endl;
 
	double	listStartTimer = getTime();
	sortList(0, _list.size() - 1);
	double timeSortList = getTime() - listStartTimer;
	
	std::cout << std::endl << BLU "After sorting with std::list\t" D;
	printContainer(_list);
	std::cout << std::endl;

	double	dequeStartTimer = getTime();
	sortDeque(0, _deque.size() - 1);
	double timeSortDeque = getTime() - dequeStartTimer;

	std::cout << std::endl << PU "After sorting with std::deque:\t" D;
	printContainer(_deque);
	std::cout << std::endl;

	std::cout << std::endl << "Time to process a range of\t" << _list.size() << " elements with"
		<< BLU " std::list " D << ": " << _timeInputCheck + timeSortList << "ms" << std::endl;
		
	std::cout << std::endl << "Time to process a range of\t" << _deque.size() << " elements with"
		<< PU " std::deque " D << ": " << _timeInputCheck + timeSortDeque << "ms" << std::endl << std::endl;
}

//function returns time in microseconds
double PmergeMe::getTime() {

	struct timeval tv;
	double time;

	gettimeofday(&tv, NULL);
	time = tv.tv_sec + tv.tv_usec *1e-6;
	return (time * 1000);
}

template <typename T>
void	PmergeMe::printContainer(T const &container) {

	typename T::const_iterator	it;
	for (it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
}

void	PmergeMe::sortList(int start_idx, int end_idx)
{
	if (end_idx - start_idx > _K)
	{
		int mid_idx = (start_idx + end_idx) / 2;
		sortList(start_idx, mid_idx);
		sortList(mid_idx + 1, end_idx);
		mergeList(start_idx, mid_idx, end_idx);
	}
	else
		insertList(start_idx, end_idx + 1);
}

void	PmergeMe::mergeList(int start_idx, int mid_idx, int end_idx)
{
	int	n1 = mid_idx - start_idx + 1;
	int n2 = end_idx - mid_idx;
	
	// Create temporary sublists
	std::list<int> LA, RA;

	// Copy data to temporary sublists LA[] and RA[]
	for (int i = 0; i < n1; i++)
		LA.push_back(getValueAtIndex(_list ,start_idx + i));
	for (int j = 0; j < n2; j++)
		RA.push_back(getValueAtIndex(_list, mid_idx + j + 1));

	int RIDX = 0;
	int LIDX = 0;
	
	std::list<int>::iterator	it = _list.begin();
	for (int i = 0; i < start_idx; i++)
		it++;

	for (int i = start_idx; i <= end_idx; i++)
	{
		if (RIDX == n2)
		{
			*it = getValueAtIndex(LA, LIDX);
			LIDX++;
		}
		else if (LIDX == n1)
		{
			*it = getValueAtIndex(RA, RIDX);
			RIDX++;
		}
		else if (getValueAtIndex(RA, RIDX) > getValueAtIndex(LA, LIDX))
		{
			*it =  getValueAtIndex(LA, LIDX);
			LIDX++;
		}
		else
		{
			*it =  getValueAtIndex(RA, RIDX);
			RIDX++;
		}
		it++;
	}
}

void	PmergeMe::insertList(int start_idx, int mid_idx)
{
	std::list<int>::iterator it = _list.begin();
	for (int i = 0; i < start_idx; i++)
		++it;
	std::list<int>::iterator start_it = it;
	std::list<int>::iterator end_it = _list.begin();
	for (int i = 0; i < mid_idx; i++)
		++end_it;

	while (it != end_it) 
	{
		std::list<int>::iterator insertionPos = start_it;

		while (insertionPos != it && *insertionPos <= *it)
			++insertionPos;
			
		int tmp = *insertionPos;
		*insertionPos = *it;
		*it = tmp;
		
		it = insertionPos;
		it++;
	}
}

// function to get iterator at index in list; it will increment the iterator
// index times to get it to desired position
std::list<int>::iterator PmergeMe::getIteratorAtIndex(int index)
{
	std::list<int>::iterator it = _list.begin();
	for(int i = 0; i < index; i++)
		it++;
	return it;
}

// function to get value at index in list; it will increment the iterator
// index times to get it to desired position and return its value
int PmergeMe::getValueAtIndex(std::list<int> input, int index)
{
	std::list<int>::iterator it = input.begin();
	for(int i = 0; i < index; i++)
		it++;
	return *it;
}

void	PmergeMe::sortDeque(int start_idx, int end_idx)
{
	if (end_idx - start_idx > _K)
	{
		int mid_idx = (start_idx + end_idx) / 2;
		sortDeque(start_idx, mid_idx);
		sortDeque(mid_idx + 1, end_idx);
		mergeDeque(start_idx, mid_idx, end_idx);
	}
	else
		insertDeque(start_idx, end_idx);
}

void	PmergeMe::mergeDeque(int start_idx, int mid_idx, int end_idx)
{
	int n1 = mid_idx - start_idx + 1;
	int n2 = end_idx - mid_idx;

	// Create temporary subarrays
	std::deque<int> LA, RA;

	// Copy data to temporary subarrays LA[] and RA[]
	for (int i = 0; i < n1; i++)
		LA.push_back(_deque[start_idx + i]);
	for (int j = 0; j < n2; j++)
		RA.push_back(_deque[mid_idx + j + 1]);

	int RIDX = 0;
	int LIDX = 0;
	for (int i = start_idx; i <= end_idx; i++) {
		if (RIDX == n2) {
			_deque[i] = LA[LIDX];
			LIDX++;
		} else if (LIDX == n1) {
			_deque[i] = RA[RIDX];
			RIDX++;
		} else if (RA[RIDX] > LA[LIDX]) {
			_deque[i] = LA[LIDX];
			LIDX++;
		} else {
			_deque[i] = RA[RIDX];
			RIDX++;
		}
	}
}

void	PmergeMe::insertDeque(int start_idx, int mid_idx)
{
	for (int i = start_idx; i < mid_idx; i++) 
	{
		int tmp = _deque[i + 1];
		int	j = i + 1;
		while (j > start_idx && _deque[j - 1] > tmp)
		{
			_deque[j] = _deque[j - 1];
			j--;
		}
		_deque[j] = tmp;
	}
}