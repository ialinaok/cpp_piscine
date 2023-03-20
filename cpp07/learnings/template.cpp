/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:09:23 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/20 18:25:03 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T> 							//announcing that I'm defining a template
T const &	max(T const & x, T const & y) {		//passing as a reference to save memory

	return (x >= y ? x : y);
}

int	foo(int x) {

	std::cout << "Long computing time" << std::endl;
	return (x);
}

int	main(void) {

	int	a = 23;
	int	b = 42;

	//Explicit instantiation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;
	//Implicit instantiation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;

	float	c = -1.45f;
	float	d = 23.23f;

	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<int>(c, d) << std::endl;
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl;

	int	ret = max<int>(foo(a), foo(b));
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;

	return (0);
}