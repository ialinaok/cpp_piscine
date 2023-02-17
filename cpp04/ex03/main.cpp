/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:29:27 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 21:42:29 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main() {

	std::cout << BLA << "-----------------------------------" << D << std::endl;
	std::cout << BLA << "-------" << YELL << "TEST FROM SUBJECT PDF" << BLA << "-------" << std::endl;
	std::cout << BLA << "-----------------------------------" << WH << std::endl;

	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");
	
	AMateria*	tmp;
	tmp = src->createMateria("ice");  //these are being freed from Character bc they are added to it's inventory
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter*	bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete me;

	std::cout << BLA << "-----------------------------------" << D << std::endl;
	std::cout << BLA << "---------" << YELL << "ADDITIONAL TESTS" << BLA << "----------" << std::endl;
	std::cout << BLA << "-----------------------------------" << WH << std::endl;
	std::cout << BLA << "-----------------------------------" << D << std::endl;
	std::cout << BLA << "- - - - -" << PU << "Character test" << BLA << " - - - - - -" << std::endl;
	std::cout << BLA << "-----------------------------------" << WH << std::endl;

	Character*	max = new Character("Max");

	for (int i = 0; i < 3; i++) {

		tmp = new Ice();
		max->equip(tmp);
	}

	Character*	newMax = new Character(*max);

	std::cout << max->getName() << "'s inventory: " << std::endl;
	max->showInventory();
	std::cout << std::endl << "New " << newMax->getName() << "'s inventory: " << std::endl;
	newMax->showInventory();

//testing unequip
	AMateria	*toDelete = newMax->getAddress(1);
	newMax->unequip(1);
	newMax->unequip(1);
	delete toDelete;

	std::cout << max->getName() << "'s inventory: " << std::endl;
	max->showInventory();
	std::cout << std::endl << "New " << newMax->getName() << "'s inventory: " << std::endl;
	newMax->showInventory();
	std::cout << std::endl;

	newMax->use(1, *bob);
	max->use(1, *bob);
	max->use(7, *bob);

//testing inventories boundaries
	for (int i = 0; i < 3; i++) {

		tmp = new Cure();
		newMax->equip(tmp);
	}
	delete tmp;

	std::cout << std::endl << "New " << newMax->getName() << "'s inventory: " << std::endl;
	newMax->showInventory();
	std::cout << std::endl;

	delete max;
	delete newMax;
	delete src;
	delete bob;
}