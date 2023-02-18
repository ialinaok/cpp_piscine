/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:35:45 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/18 20:14:16 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Janusz"), _grade(100) {

	// std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	try {

		this->_grade = grade;
		if (this->_grade < 1)
			throw GradeOutOfHigherScopeException();
		else if (this->_grade > 150)
			throw GradeOutOfLowerScopeException();
	}
	catch (GradeOutOfHigherScopeException& e) {

		std::cout << RED << "ERROR - can't get higher" << D << std::endl;
	}
	catch (GradeOutOfLowerScopeException& e) {

		std::cout << RED << "ERROR - can't get lower" << D << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {

	*this = src;
	// std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {

	// std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs) {

	if (this != &rhs)
		this->_grade = rhs._grade;
	// std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return (*this);
}

void	Bureaucrat::increment(void) {

	try {

		this->_grade--;
		if (this->_grade < 1)
			throw GradeOutOfHigherScopeException();
	}
	catch (GradeOutOfHigherScopeException& e) {

		this->_grade++;
		std::cout << RED << "ERROR - can't get lower" << std::endl;
	}
}

void	Bureaucrat::decrement(void) {

	try {

		this->_grade++;
		if (this->_grade > 150)
			throw GradeOutOfLowerScopeException();
	}
	catch (GradeOutOfLowerScopeException& e) {

		this->_grade--;
		std::cout << RED << "ERROR - can't get higher" << std::endl;
	}
}

std::string	Bureaucrat::getName(void) const {

	return (this->_name);
}

int			Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

const char*	Bureaucrat::GradeOutOfLowerScopeException::what() const throw() {

	return ("Grade can't get any lower #loser");
}

const char*	Bureaucrat::GradeOutOfHigherScopeException::what() const throw() {

	return ("Grade can't get any higher #wolf");
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;

	return (o);
}