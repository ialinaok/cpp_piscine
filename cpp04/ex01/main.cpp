/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:09:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 21:15:17 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "ShallowCat.hpp"

int	main() {

	int		n = 4;
	Animal	*arr[n];
	
	for (int i = 0; i < n / 2; i++)
		arr[i] = new Dog();

	for (int j = 2; j < n; j++)
		arr[j] = new Cat();

	for (int l = 0; l < 4; l++)
		arr[l]->makeSound();

	std::cout << BLA << "-----------------------------" << D << std::endl;

	for (int k = 0; k < 4; k++)
		delete arr[k];
	
	std::cout << BLA << "----" << YELL << "TESTING SHALLOW COPY" << BLA << "----" << std::endl;

	ShallowCat	*fluffy = new ShallowCat();
	fluffy->putIntoBrain("Pet me pls!", 23);
	// ShallowCat	*fluffier = fluffy;
	ShallowCat	*fluffier(fluffy);
	std::cout << "Fluffy's thoughts:    " << fluffy->getOutOfBrain(23) << std::endl;
	std::cout << "Fluffiers's thoughts: " << fluffier->getOutOfBrain(23) << std::endl;

	fluffy->putIntoBrain("I really need to be scratched on belly!", 23);

	std::cout << "Fluffy's thoughts:    " << fluffy->getOutOfBrain(23) << std::endl;
	std::cout << "Fluffiers's thoughts: " << fluffier->getOutOfBrain(23) << std::endl;

	std::cout << BLA << "----" << YELL << "TESTING DEEP COPY" << BLA << "----" << std::endl;

	Cat	*whiskers = new Cat();
	whiskers->putIntoBrain("I am so hungry!", 23);
	Cat	*whiskerser(whiskers);
	std::cout << "Whiskers's thoughts:    " << whiskers->getOutOfBrain(23) << std::endl;
	std::cout << "Whiskersers's thoughts: " << whiskers->getOutOfBrain(23) << std::endl;

	whiskers->putIntoBrain("Please give me fooood!", 23);

	std::cout << "Whiskers's thoughts:    " << whiskers->getOutOfBrain(23) << std::endl;
	std::cout << "Whiskersers's thoughts: " << whiskerser->getOutOfBrain(23) << std::endl;
}