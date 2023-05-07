/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:47:08 by apielasz          #+#    #+#             */
/*   Updated: 2023/05/07 01:24:31 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PmergeMe.hpp"

int main(int argc, char **argv) {

	if (argc != 3) {
		std::cerr << "Error: you need to provide at least two numbers" << std::endl;
		return (1);
	}

	try {
		PmergeMe(argv);
	}
	catch (std::exception & err) {
		std::cerr
	}
} 