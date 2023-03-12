/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:47:27 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/12 19:00:03 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <unistd.h>

int	main() {

	Base	*ret;
	for (int i = 0; i < 3; i++, sleep(1)) {

		ret = generate();
		std::cout << YELL;
		identify(ret);
		delete ret;
	}

	std::cout << CY;

	ret = generate();
	Base	&retref0 = *ret;
	identify(retref0);
	delete ret;
	sleep(1);
	ret = generate();
	Base	&retref1 = *ret;
	identify(retref1);
	delete ret;
	sleep(1);
	ret = generate();
	Base	&retref2 = *ret;
	identify(retref2);
	delete ret;
	std::cout << D;
}