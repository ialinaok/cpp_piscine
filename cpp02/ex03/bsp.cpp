/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:33:00 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/12 18:37:22 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	find_area_of_triangle(Point a, Point b, Point c) {

	Fixed	x1 = a.getX();
	Fixed	y1 = a.getY();
	Fixed	x2 = b.getX();
	Fixed	y2 = b.getY();
	Fixed	x3 = c.getX();
	Fixed	y3 = c.getY();
	Fixed	half(0.5f);
	Fixed	zero;
	Fixed	negative(-1);

	Fixed	area = half * ((x1 * y2) + (x2 * y3) + (x3 * y1) - (x1 * y3) - (x2 * y1) - (x3 * y2));
	if (area < zero)
		area = area * negative;
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {

	Fixed	area1;
	Fixed	area2;
	Fixed	area3;
	Fixed	sum_of_areas;
	Fixed	whole_area;

	area1 = find_area_of_triangle(a, b, point);
	area2 = find_area_of_triangle(b, c, point);
	area3 = find_area_of_triangle(c, a, point);
	sum_of_areas = area1 + area2 + area3;
	whole_area = find_area_of_triangle(a, b, c);

	if (whole_area == sum_of_areas && (area1 != 0 && area2 != 0 && area3 != 0))
		return (true);
	return (false);
	
	//*** EXACT POINT LOCATION TEST***//
	// whole_area == sum_of_areas ? 
	// 	area1 == 0 || area2 == 0 || area3 == 0 ? 
	// 		std::cout << YELL << "on the line" << D << std::endl :
	// 		std::cout << GREEN << "inside" << D << std::endl :
	// 	std::cout << RED << "outside" << D << std::endl;
}