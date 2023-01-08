/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_class_instance.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:33:10 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/08 16:51:26 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class_instance.hpp"

int	main(void) {

	Sample instance; // instance is the dynamic part. class is a mould for instances.
	// this will call the constructor automatically. after that, the function runs 
	// out of scope - all local vars are destroyed - so the destructor is called. 

	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;

	instance.bar();

	return (0);
}

// to compile: c++ class_instance.cpp main_class_instance.cpp