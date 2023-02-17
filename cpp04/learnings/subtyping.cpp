/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtyping.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:30:30 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 13:15:04 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	Character {

	public:
		void	sayHello(std::string const & target);
};

class	Warrior : public Character {

	public:
		void	sayHello(std::string const & target);
};

void	Character::sayHello(std::string const & target) {

	std::cout << "Hello " << target << "!" << std::endl;
}

void	Warrior::sayHello(std::string const & target) {

	std::cout << "Fuck off " << target << "!" << std::endl;
}

class	Characterv {

	public:
		virtual void	sayHello(std::string const & target);
};

class	Warriorv : public Characterv {

	public:
		void	sayHello(std::string const & target);
};

void	Characterv::sayHello(std::string const & target) {

	std::cout << "Hello " << target << "!" << std::endl;
}

void	Warriorv::sayHello(std::string const & target) {

	std::cout << "Fuck off " << target << "!" << std::endl;
}

int	main() {

// this is ok - a Warrior is a Warrior
	Warrior		*a = new Warrior();
// also ok - a warrior is also a character
	Character	*b = new Warrior();
// this - not okay - character isn't a warrior
//	Warrior	*c = new Character();

	Warriorv	*c = new Warriorv();
	Characterv	*d = new Warriorv();
	// Warriorv	*e = new Characterv();
	// e->sayHello("BRUH");

	a->sayHello("Jeff");
	b->sayHello("Tomi");

	c->sayHello("Jeff");
	d->sayHello("Tomi");


	// virtual keyword - it means that the linkage will be dynamic and not static
	// the only way for the compiler to know which type of object it is is to look at it's type
	// and the type is clearly Character, because we declared a Character *
	// however, when a link is dynamic, not static, then I do not say it is a Warrior
	// it can change even by user input. link will be made during execution
	// compiler will go and look at what the object is exactly
	// method - a member function which resolution will be dynamic
}