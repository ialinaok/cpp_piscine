/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:59:07 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/30 20:38:45 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0), _ix(0) {}

Span::Span(unsigned int N) : _N(N), _ix(0) {}

Span::Span(Span const & src) : _N(src._N), _ix(0) {

	*this = src;
}

~Span::Span() {

	delete this->_arr;
}

//it's a deep copy bc this is how = operator works for vector
Span & Span::operator=(Span const & rhs) {

	if (this != &rhs) {
		this->_N = rhs->_N
		this->_arr = rhs->_arr;
		this->_ix = rhs->_ix;
	}
	return (*this)
}

void	Span::addNumber(int new_number) {

	if ()
}

int		Span::shortestSpan(void) {

	
}

int		Span::longestSpan(void) {

	
}

void	Span::addMany(Span & span) {

	
}