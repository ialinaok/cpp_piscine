/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:10:05 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/24 15:19:29 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>

int	main() {

	// int	a[10];
	// a[17] = 6; //bad, will not compile

	std::array<int, 10> b;
	b[17] = 6;

	std::cout << b[17] << std::endl;
	std::cout << "size: " << b.size() << std::endl;
	std::cout << "data: " << b.data() << std::endl;

	for (std::array<int, 10>::iterator i = b.begin(); i != b.end(); i++) {

		*i = 23;
	}

	int n = 0;
	for (std::array<int, 10>::iterator i = b.begin(); i != b.end(); i++, n++) {

		std::cout << "b[" << n << "] = " << *i << std::endl;
	}

	return (0);
}