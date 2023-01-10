/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility_main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:32:25 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/10 16:36:16 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "visibility.hpp"

int	main(void) {

	Visibility	instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;

	// instance._privateFoo = 42; --> that's not going to work
	// std::cout << "instance._privateFoo" << instance._privateFoo << std::endl; --> even that's not going to work
	
	instance.publicBar();
	// instance._privateBar(); --> obviously, it's not going to work

	return (0);
}