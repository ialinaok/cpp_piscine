/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_operator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:17:39 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/04 16:40:24 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Foo {

	public:
		Foo(float const v) : _v(v) {}

		float	getV(void) const { return this->_v; }

		operator float() { return this->_v; }
		operator int()	 { return static_cast<int>(this->_v); }

	private:
		float	_v;
};

int	main() {

	Foo		a(420.042f);
	float	b = a; //we initialize that directly thanks to operators
	int		c = a; //this too. compiler will go to the class and check

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return (0);
}