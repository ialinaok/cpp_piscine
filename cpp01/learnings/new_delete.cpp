/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_delete.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:30:05 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/21 18:37:56 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Student {

	private:
		std::string	_login;

	public:
		Student(std::string login) : _login(login) {

			std::cout << "Student " << this->_login << "is born" << std::endl;
		}
		~Student() {

			std::cout << "Student " << this->_login << "died" << std::endl;
		}
};

int	main(void) {

	Student	bob = Student("bdrenth"); // this is on the stack
	Student	*max = new Student("mlamana"); // max is on the heap

	// somethings happening here

	delete max; // max dies

	return (0); // bob will die bc his destructor is called automatically
}
