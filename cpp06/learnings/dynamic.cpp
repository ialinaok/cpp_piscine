/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:26 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/04 15:50:23 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <exception>

//happens at runtime, not during compilation, so program may compile but program might fail at runtime
//it will only work with polymorphic instance

class	Parent					{ public: virtual ~Parent(void) {} };
class	Child1 : public Parent {};
class	Child2 : public Parent {};


int	main() {

	Child1	a;
	Parent	*b = &a;

	Child1	*c = dynamic_cast<Child1 *>(b);
	if (c == NULL)
		std::cout << "Conversion is NOT ok" << std::endl;
	else
		std::cout << "Conversion is ok" << std::endl;

	Child2	*d = dynamic_cast<Child2 *>(b);
	if (c == NULL)
		std::cout << "Conversion is NOT ok" << std::endl;
	else
		std::cout << "Conversion is ok" << std::endl;

	try {
		Child2 &	d = dynamic_cast<Child2 &>(*b);
	}
	catch (std::bad_cast &bc) {
		std::cout << "Conversion is NOT ok" << bc.what() << std::endl;
		// return (1);
	}

	try {
		Parent &	d = dynamic_cast<Parent &>(*b);
	}
	catch (std::bad_cast &bc) {
		std::cout << "Conversion is NOT ok" << bc.what() << std::endl;
		return (1);
	}
	std::cout << "Conversion worked" << std::endl;
	return (0);
}

//pointers - works with anything
//references - works with the same or base class