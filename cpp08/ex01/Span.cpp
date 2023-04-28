/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:59:07 by apielasz          #+#    #+#             */
/*   Updated: 2023/04/28 14:59:01 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0), _ix(0) {}

Span::Span(unsigned int N) : _N(N), _ix(0) {

	std::cout << GREEN "Creating an instance of Span with " WH << this->_N << GREEN;
	std::cout << GREEN " available slots" D << std::endl; 
}

Span::Span(Span const & src) : _N(src._N), _ix(0) {

	*this = src;
}

Span::~Span() {}

//it's a deep copy bc this is how = operator works for vector
Span & Span::operator=(Span const & rhs) {

	if (this != &rhs) {
		this->_N = rhs._N;
		this->_arr = rhs._arr;
		this->_ix = rhs._ix;
	}
	return (*this);
}

void	Span::addNumber(int new_number) {

	if (this->_ix < this->_N) {
		this->_arr.push_back(new_number);
		this->_ix++;
	}
	else
		throw NoFreeSpaceNoMore();
}

int		Span::shortestSpan(void) {

	if (this->_ix <= 1)
		throw NoSpanFound();

	int	diff = INT_MAX;
	std::vector<int> copy = this->_arr;
	std::sort(copy.begin(), copy.end());
	for (unsigned int i = 0; i < copy.size() - 1; i++) {
		if (copy[i + 1] - copy[i] < diff)
			diff = copy[i + 1] - copy[i];
	}
	return (diff);
}

int		Span::longestSpan(void) {

	if (this->_ix <= 1)
		throw NoSpanFound();

	int	min = *std::min_element(this->_arr.begin(), this->_arr.end());
	int	max = *std::max_element(this->_arr.begin(), this->_arr.end());
	// std::cout << PU "min:" D << min << PU ", max: " D << max << std::endl;
	return (max - min);
}

void	Span::addMany(int howMany) {

	std::vector<int> addMe(howMany);
	std::srand(std::time(0));
	std::generate(addMe.begin(), addMe.end(), rand);
	for (std::vector<int>::iterator it = addMe.begin(); it != addMe.end(); it++) {
		this->addNumber(*it);
	}
}

void	Span::print_vector(int printHowMany) {

	int	i = 0;

	for (std::vector<int>::const_iterator it = this->_arr.begin(); it != this->_arr.end(); it++, i++) {
		if (i >= printHowMany && printHowMany != PRINT_ALL)
			break;
		std::cout << BLA "vector[" WH << i << BLA "] = " WH << *it << D << std::endl;
	}
}

const char *Span::NoSpanFound::what() const throw() {

	return ("there is no span in here");
}

const char *Span::NoFreeSpaceNoMore::what() const throw() {

	return ("there is no more space left to add numbers");
}