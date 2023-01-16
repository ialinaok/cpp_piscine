/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_test.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:28:09 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/15 20:50:27 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void) {

	int	index = 0;
	std::string	fname = "Alina";
	std::string	lname = "Pielaszkiewicz";
	std::string	nname = "linka";

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First name" << "|";
	std::cout << std::setw(10) << std::right << "Last name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	while (index < 8) {

		std::cout << std::setw(10) << std::setfill(' ') << index << "|";
		if (fname.length() >=10)
			std::cout << std::setw(10) << std::setfill(' ') << fname.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::setfill(' ') << fname << "|";
		if (lname.length() >= 10)
			std::cout << std::setw(10) << std::setfill(' ') << lname.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::setfill(' ') << lname << "|";
		if (nname.length() >= 10)
			std::cout << std::setw(10) << std::setfill(' ') << nname.substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << std::setfill(' ') << nname << std::endl;

		index++;
	}
}

// Last name|