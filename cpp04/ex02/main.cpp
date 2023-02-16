/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:38:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:50:03 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {

//if uncommented, it will highlight an error
	// AAnimal	abstract;
	std::cout << BLA << "----------------------------------" << D << std::endl;
	std::cout << BLA << "-----------" << YELL << "TESTING CAT" << BLA << "------------" << std::endl;
	std::cout << BLA << "----------------------------------" << WH << std::endl;
	
	Cat	kitty;

	std::cout << kitty.getType() << " says " << CY;
	kitty.makeSound();
	std::cout << std::endl;

	std::cout << BLA << "----------------------------------" << D << std::endl;
	std::cout << BLA << "-----------" << BLU << "TESTING DOG" << BLA << "------------" << std::endl;
	std::cout << BLA << "----------------------------------" << WH << std::endl;
	
	Dog	doggo;

	std::cout << doggo.getType() << " says " << PU;
	doggo.makeSound();
	std::cout << std::endl;
}