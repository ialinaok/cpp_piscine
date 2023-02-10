/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:11:36 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/10 19:21:37 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class	Point {

	public:
		Point();
		Point(const float x, const float y);
		~Point();
		Point(Point const& src);
		Point&	operator=(Point const& rhs);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		const Fixed	_x;
		const Fixed	_y;
};

#endif