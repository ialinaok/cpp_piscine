/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:26:21 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/24 15:41:42 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int	roll(void) {

	return rand() % 6 + 1;
}

int	main() {

	std::vector<int>	varr;

	for (int i = 0; i < 5; i++) {
		varr.push_back(roll());
	}

	for (std::vector<int>::iterator it = varr.begin(); it != varr.end(); it++) {
		std::cout << *it << std::endl;
	}
}