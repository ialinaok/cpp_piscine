/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:33:00 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/10 19:53:21 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	calculateBarycentric(Point const a, Point const b, Point const c, Point const point) {

	float	a;
	float	b;

	a = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) \ // ((y2 - y3)*(x - x3) + (x3 - x2)*(y - y3))
	/ 
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {

	
}