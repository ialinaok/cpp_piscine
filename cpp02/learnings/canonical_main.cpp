/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canonical_main.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:25:07 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 20:27:36 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "canonical.hpp"

int	main() {

	Canonical	inst1;
	Canonical	inst2(42);
	Canonical	inst3(inst1);

	std::cout << inst1 << std::endl;
	std::cout << inst2 << std::endl;
	std::cout << inst3 << std::endl;

	inst3 = inst2;
	std::cout << inst3 << std::endl;

	return (0);
}