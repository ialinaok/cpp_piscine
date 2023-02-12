/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:46:00 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/12 16:22:21 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//***TO VISUALISE TRIANGLES***//
//https://www.geogebra.org/m/JMMKv7cx

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main() {

	//***TRIANGLE VERTICES***//
	Point const	a(2.283f, 0.461f);
	Point const	b(6.723f, 1.501f);
	Point const	c(3.763f, 5.021f);

	Point const	inside(4.243f, 2.181f);
	Point const	outside(1.703f, 3.881f);
	Point const	ontheside(2.283f, 0.461f);

	std::cout << CY << "Vertices of the triangle:" << std::endl << "a" << a << "b" << b << "c" << c << D << std::endl;

	bsp(a, b, c, inside) == true ? 
		std::cout << YELL << "Point: " << inside << GREEN << "lays inside the triangle" << YELL << std::endl :
		std::cout << "Point: " << inside << RED << "doesn't lie inside the triangle" << YELL << std::endl;

	std::cout << BLACK << "---------------------------------" << YELL << std::endl;

	bsp(a, b, c, outside) == true ?
		std::cout << "Point: " << outside << GREEN << "lays inside the triangle" << YELL << std::endl :
		std::cout << "Point: " << outside << RED << "doesn't lie inside the triangle" << YELL << std::endl;

	std::cout << BLACK << "---------------------------------" << YELL << std::endl;

	bsp(a, b, c, ontheside) == true ?
		std::cout << "Point: " << ontheside << GREEN << "lays inside the triangle" << YELL << std::endl :
		std::cout << "Point: " << ontheside << RED << "doesn't lie inside the triangle" << YELL << std::endl;
	std::cout << std::endl;
}