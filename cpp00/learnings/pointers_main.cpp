/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers_main.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:09:16 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/12 15:50:06 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "pointers.hpp"

int	main(void) {

	Pointers	instance;
	//pointer declared on the stack that gets assigned another variable's address
	Pointers	*instancep = &instance;

	//a ptr that allows me to take an address of a member attribute of a class
	//you can get the address of the foo member attribute
	//Sample:: means that it's a ptr to the integer member of a sample class
	//so - 1) if I had more than one member attributes that are int, I could use this ptr
	//to store the address of either?
	//and - 2) can I store an address of an int member attribute in just an int ptr, 
	//or do I always have to specify the class? that's easy to check 
	int	Pointers::*p = NULL;
	//ok - this works as expected. first question answered
	p = &Pointers::test;
	instance.*p = 404;
	std::cout << "::test:: so this is p assigned to another int: " << instance.test << std::endl;
	//ok - so this doesn't compile. second questioon answered
		// int	*ptr;
		// ptr = &Pointers::foo;
		// instance.*ptr = 100;
		// std::cout << "::test:: this is regular int ptr assigned to int member attribute of a class: " << instance.foo << std::endl;
	//I wanna point on a member function of a class, rly the same as just pointing to member attr
	void	(Pointers::*f)(void) const;

	//here I am assigning the address of the foo member of the Pointers class to
	//variablr p that's declared above that was previously assigned NULL
	//ok, here I assign the address of foo, but from which instance?
	//I might have many instances of the same class
	p = &Pointers::foo;

	std::cout << "- Value of member foo: " << instance.foo << std::endl;
	//dot-star operator - I must use this so that I can use the p pointer with a particular instance
	instance.*p = 23;
	std::cout << "-- Value of member foo: " << instance.foo << std::endl;
	//arrow-star operator - when I am not using the instance directly, but I am accessing
	//it through the pointer to an instance
	instancep->*p = 42;
	std::cout << "--- Value of member foo: " << instance.foo << std::endl;

	//f pointer will now pointer to bar() of the Pointers class, but still -->
	//we don't know from which instance
	f = &Pointers::bar;

	//we're using literally the same operators, but in brackets, to specify the instance that we want to use
	//dot-star for accessing instance directly, arrow-star to access through a ptr to an instance
	(instance.*f)();
	(instancep->*f)();

	return (0);
}