/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references_3.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:50:03 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/21 20:03:59 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Student {

	private:
		std::string	_login;

	public:
		Student(std::string const & login) : _login(login) {}

		std::string&	getLoginRef() {

			return this->_login;
		}

		std::string const & getLoginRefConst() const {

			return this->_login;
		}

		std::string*	getLoginPtr() {

			return &(this->_login);
		}

		std::string const * getLoginPtrConst() const {

			return &(this->_login);
		}
};

int	main() {

	Student	bob = Student("bdretw");
	Student	const	max = Student("mlamana");

	std::cout << bob.getLoginRefConst() << " " << max.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(max.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobdretf";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	return (0);
}