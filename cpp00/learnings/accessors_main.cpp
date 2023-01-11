/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accessors_main.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:36:40 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 14:44:51 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "accessors.hpp"

int	main(void) {

	Accessors	instance;

	std::cout << "--- setting _foo to 23 ---" << std::endl;
	instance.setFoo(23);
	std::cout << "new Foo: " << instance.getFoo() << std::endl;
	std::cout << "--- setting _foo to -23 ---" << std::endl;
	instance.setFoo(-23);
	std::cout << "new Foo: " << instance.getFoo() << std::endl;

	return (0);
}