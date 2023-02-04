/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:28:26 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/04 20:02:25 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {

	Harl	harl_went_vegan;

	if (argc != 2) {

		std::cout << "This is the correct way to use the program: " << YELL << "./harlFliter <argument>" << std::endl;
		std::cout << D << "Choose <argument> from: " << CY << " [DEBUG]  [INFO]  [WARNING]  [ERROR]" << D << std::endl;
		return (1);
	}
	harl_went_vegan.complain(std::string(argv[1]));
}