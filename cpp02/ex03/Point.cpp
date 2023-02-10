/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:16:14 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/10 19:25:23 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : 
_x(x), _y(y) {}

Point::~Point() {}

Point::Point(Point const& src) {

	*this = src;
}

Point&	Point::operator=(Point const& rhs) {

	return (*this);
}

Fixed	Point::getX(void) const {

	return (this->_x);
}

Fixed	Point::getY(void) const {

	return (this->_y);
}