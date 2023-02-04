/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:18:11 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/04 19:20:42 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {

	Harl	harl_went_vegan;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	harl_went_vegan.complain("random input");
	for (int i = 0; i < 4; i++) {

		harl_went_vegan.complain(levels[i]);
	}
}