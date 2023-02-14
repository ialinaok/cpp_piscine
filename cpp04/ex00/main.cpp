/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:24:21 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/14 17:55:06 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

	std::cout << BLA << "---------------------------------" << std::endl;
	std::cout << "--------" << YELL << "TESTING GOOD ONES" << BLA << "--------" << std::endl;
	std::cout << BLA << "---------------------------------" << RED << std::endl;
	const Animal	*fluffy = new Animal();
	std::cout << BLA << "---------------------------------" << CY << std::endl;
	const Animal	*aldo = new Dog();
	std::cout << std::endl;
	const Dog		*dixie = new Dog();
	std::cout << BLA << "---------------------------------" << PU << std::endl;
	const Animal	*angel = new Cat();
	std::cout << std::endl;
	const Cat		*coco = new Cat();
	std::cout << BLA << "---------------------------------" << D << std::endl;

	std::cout << YELL << aldo->getType() << " " << std::endl;
	std::cout << dixie->getType() << " " << std::endl;
	std::cout << GREEN << angel->getType() << " " << std::endl;
	std::cout << coco->getType() << " " << std::endl;
	std::cout << BLA << "---------------------------------" << WH << std::endl;
	aldo->makeSound();
	dixie->makeSound();
	std::cout << BLU;
	angel->makeSound();
	coco->makeSound();
	std::cout << RED;
	fluffy->makeSound();
	std::cout << BLA << "---------------------------------" << D << std::endl << std::endl;
	std::cout << BLA << "--------------------------------------" << D << std::endl;

	std::cout << BLA << "----------" << YELL << "TESTING WRONG ONES" << BLA << "----------" << std::endl;
	std::cout << BLA << "--------------------------------------" << CY << std::endl;
	const WrongAnimal	*furry = new WrongAnimal();
	std::cout << BLA << "--------------------------------------" << PU << std::endl;
	const WrongAnimal	*anuka = new WrongCat();
	std::cout << std::endl;
	const WrongCat		*cherie = new WrongCat();
	std::cout << BLA << "--------------------------------------" << D << std::endl;

	std::cout << GREEN << anuka->getType() << " " << std::endl;
	std::cout << cherie->getType() << " " << std::endl;
	std::cout << BLA << "--------------------------------------" << BLU << std::endl;
	anuka->makeSound();
	cherie->makeSound();
	std::cout << RED;
	furry->makeSound();
	std::cout << BLA << "--------------------------------------" << D << std::endl;

	delete fluffy;
	delete aldo;
	delete dixie;
	delete angel;
	delete coco;
	delete furry;
	delete anuka;
	delete cherie;
	//*** TEST FROM SUBJECT PDF***//
	// const Animal	*meta = new Animal();
	// const Animal	*j = new Dog();
	// const Animal	*i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();

	return (0);
}