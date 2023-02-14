/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstractclasses.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:54:05 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/14 15:10:56 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	ACharacter {

	public:
		virtual void	attack(std::string const& target) = 0; //a pure virtual function
		void			sayHello(std::string const& target);
};

class	Warrior : public ACharacter {

	public:
		virtual void	attack(std::string const& target);

	private:
		std::string	name; //it will only be able to be used by Warrior
};

void	ACharacter::sayHello(std::string const& target) {

	std::cout << "Just sayin hello... " << target << std::endl;
}

void	Warrior::attack(std::string const& target) {

	std::cout << "Attacking you, " << target << "!" << std::endl;
}

int	main(void) {

	ACharacter	*a = new Warrior();

	//this doesn't work => cannot instantiate an instance of an abstract class
	// ACharacter	*b = new ACharacter();
}