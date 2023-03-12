/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:31:50 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/12 18:40:59 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base	*generate(void) {

	int		random;
	Base	*ptr;
	time_t	now = std::time(0);

	random = now % 3;

	switch (random) {

		case (_A) : {

			ptr = new A();
			break ;
		}
		case (_B) : {

			ptr = new B();
			break ;
		}
		case (_C) : {

			ptr = new C();
			break ;
		}
	}
	return (ptr);
}

void	identify(Base *p) {

	A	*a_class = dynamic_cast<A *>(p);
	B	*b_class = dynamic_cast<B *>(p);
	C	*c_class = dynamic_cast<C *>(p);

	if (a_class != NULL)
		std::cout << "A" << std::endl;
	if (b_class != NULL)
		std::cout << "B" << std::endl;
	if (c_class != NULL)
		std::cout << "C" << std::endl;
}

//we have a Base class reference and we try to cast it into A, B or C reference
//if p is actually A, B or C, conversion will work. else, an exception will be thrown

void	identify(Base& p) {

	int	check = -1;

	try {

		A &	a_class = dynamic_cast<A &>(p);
		(void)a_class;
		check = _A; //this will only happen if cast succeeds
	}
	catch (std::bad_cast &bc) {}
	if (check == _A) {

		std::cout << "A" << std::endl;
		return ;
	}

	try {

		B &	b_class = dynamic_cast<B &>(p);
		(void)b_class;
		check = _B;
	}
	catch (std::bad_cast &bc) {}
	if (check == _B) {

		std::cout << "B" << std::endl;
		return ;
	}

	try {

		C & c_class = dynamic_cast<C &>(p);
		(void)c_class;
		check = _C;
	}
	catch (std::bad_cast &bc) {}
	if (check == _C) {

		std::cout << "C" << std::endl;
		return ;
	}
}

// Base * make_a(void) {

// 	return (new A());
// }