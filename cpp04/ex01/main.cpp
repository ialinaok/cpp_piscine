/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:09:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:41:59 by apielasz         ###   ########.fr       */
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

	std::cout << BLA << "---------------------------------" << D << std::endl;
	std::cout << BLA << "------------" << YELL << "MAIN TEST" << BLA << "------------" << std::endl;
	std::cout << BLA << "---------------------------------" << D << std::endl;
	std::cout << GREEN << "--> filling an array of " << n << " animals, half dogs and half cats:" << D << std::endl;

	for (int i = 0; i < n / 2; i++)
		arr[i] = new Dog();
	for (int j = 2; j < n; j++)
		arr[j] = new Cat();

	std::cout << GREEN << "--> iterating through array, calling makeSound():" << D << std::endl;
	for (int l = 0; l < 4; l++)
		arr[l]->makeSound();

	std::cout << GREEN << "--> iterating through array, deleting animals:" << D << std::endl;

	for (int k = 0; k < 4; k++)
		delete arr[k];

	std::cout << BLA << "------------------------------" << D << std::endl;
	std::cout << BLA << "-----" << YELL << "TESTING SHALLOW COPY" << BLA << "-----" << std::endl;
	std::cout << BLA << "------------------------------" << D << std::endl;

//creating a ShallowCat object 'fluffy' on heap and setting an idea in its brain
	ShallowCat	*fluffy = new ShallowCat();
	fluffy->putIntoBrain("Please, pet me!", 23);

//creating another ShallowCat object 'fluffier' that is copied from 'fluffy'
	ShallowCat	*fluffier = new ShallowCat(*fluffy);
	std::cout << std::endl << "Fluffy's thoughts:    " << fluffy->getOutOfBrain(23) << std::endl;
	std::cout << "Fluffiers's thoughts: " << fluffier->getOutOfBrain(23) << std::endl;


//we're modifying fluffy's idea, in the output we will see that by doing so, we're also modifying
//an idea of fluffier
	std::cout << GREEN << "Fluffy changes his mind..." << D << std::endl;
	fluffy->putIntoBrain("Please, give me food!", 23);

	std::cout << "Fluffy's thoughts:    " << fluffy->getOutOfBrain(23) << std::endl;
	std::cout << "Fluffiers's thoughts: " << fluffier->getOutOfBrain(23) << std::endl;

	std::cout << "Address of Fluffy's brain: " << CY << fluffy->getBrain() << D << std::endl;
	std::cout << "Address of Fluffier's brain: " << CY << fluffier->getBrain() << D << std::endl;


	std::cout << BLA << "------------------------------" << D << std::endl;
	std::cout << BLA << "------" << YELL << "TESTING DEEP COPY" << BLA << "-------" << std::endl;
	std::cout << BLA << "------------------------------" << D << std::endl;
//creating a Cat object 'furry' on heap and setting an idea in its brain
	Cat	*furry = new Cat();
	furry->putIntoBrain("Scratch me behind my ear!", 23);

//creating another Cat object 'furrier' that is copied from 'furry'
	Cat	*furrier = new Cat(*furry);
	std::cout << std::endl << "Furry's thoughts:    " << furry->getOutOfBrain(23) << std::endl;
	std::cout << "Furriers's thoughts: " << furry->getOutOfBrain(23) << std::endl;

//modifying furry's idea does not change furrier's idea
	std::cout << GREEN << "Fluffy changes his mind..." << D << std::endl;
	furrier->putIntoBrain("Scratch me on my belly!", 23);

	std::cout << "Furry's thoughts:    " << furry->getOutOfBrain(23) << std::endl;
	std::cout << "Furriers's thoughts: " << furrier->getOutOfBrain(23) << std::endl << std::endl;

	std::cout << "****************************" << std::endl;
	delete fluffy;
	std::cout << "****************************" << std::endl;
	delete fluffier;
	std::cout << "****************************" << std::endl;
	delete furry;
	std::cout << "****************************" << std::endl;
	delete furrier;
	std::cout << "****************************" << std::endl;
}