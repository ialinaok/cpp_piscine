/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:16:14 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/12 15:50:50 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::~Point() {}

Point::Point(Point const &src) : _x(src.getX()), _y(src.getY()) {}

Point&	Point::operator=(Point const& rhs) {

	(void) rhs;
	return (*this);
}

float	Point::getXfloat(void) const {

	return (this->_x.toFloat());
}

float	Point::getYfloat(void) const {

	return (this->_y.toFloat());
}

Fixed const&	Point::getX(void) const {

	return (this->_x);
}

Fixed const&	Point::getY(void) const {

	return (this->_y);
}

std::ostream&	operator<<(std::ostream& o, Point const& rhs) {

	o << "(" << rhs.getX() << ", " << rhs.getY() << ")" << std::endl;

	return (o);
}