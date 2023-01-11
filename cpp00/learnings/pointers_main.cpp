/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers_main.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:09:16 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 17:17:37 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "pointers.hpp"

int	main(void) {

	Pointers	instance;
	Pointers	*instancep = &instance;

	int	Pointers::*p = NULL;
	void	(Pointers::*f)(void) const;

	p = &Pointers::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 23;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Pointers::bar;

	(instance.*f)();
	(instance->*f)();

	return (0);
}