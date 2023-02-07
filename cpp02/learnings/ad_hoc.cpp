/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ad_hoc.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:05:04 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 16:57:57 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ad_hoc.hpp"

AdHoc::AdHoc(int n) : _n(n) {}

AdHoc::~AdHoc() {}

void	AdHoc::bar(char const c) const {

	std::cout << "char overload: " << c << std::endl;
}

void	AdHoc::bar(int const n) const {

	std::cout << "int overload: " << n << std::endl;
}

void	AdHoc::bar(float const z) const {

	std::cout << "float overload: " << z << std::endl;
}

void	AdHoc::bar(AdHoc const & l) const {

	(void) l;
	std::cout << "class overload" << std::endl;
}

int		AdHoc::getN(void) {

	return (this->_n);
}

int&	AdHoc::getNref(void) {

	int&	nref = this->_n;

	return (nref);
}

const int&	AdHoc::getNconstref(void) {

	const int&	nref = this->_n;

	return (nref);
}

int		AdHoc::const_getN(void) const {

	return (this->_n);
}

// int&	AdHoc::const_getNref(void) const {

// 	return (this->_n);
// }

// const int&	AdHoc::const_getNconstref(void) const {

// 	int&	nref = this->_n;

// 	return (nref);
// }