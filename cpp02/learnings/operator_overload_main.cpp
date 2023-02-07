/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overload_main.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:53:49 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 19:59:26 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operator_overload.hpp"

int	main() {

	Integer	x(23);
	Integer	y(42);
	Integer	z(0);

	std::cout << "Value of x: " << x << std::endl;
	std::cout << "Value of y: " << y << std::endl;
	y = Integer(63);
	std::cout << "Value of y: " << y << std::endl;
	std::cout << "Value of z: " << z << std::endl;
	z = x + y;
	std::cout << "Value of z: " << z << std::endl;

	return (0);
}