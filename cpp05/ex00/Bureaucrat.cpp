/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:35:45 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/19 11:58:10 by apielasz         ###   ########.fr       */
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
			throw GradeTooHighException();
		else if (this->_grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooHighException& e) {

		std::cout << RED << "ERROR - office does not hire such high-lvl bureaucrats" << D << std::endl;
	}
	catch (GradeTooLowException& e) {

		std::cout << RED << "ERROR - this low grade is unacceptable here" << D << std::endl;
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
			throw GradeTooHighException();
	}
	catch (GradeTooHighException& e) {

		this->_grade++;
		std::cout << RED << "ERROR - can't get higher lvl" << std::endl;
	}
}

void	Bureaucrat::decrement(void) {

	try {

		this->_grade++;
		if (this->_grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooLowException& e) {

		this->_grade--;
		std::cout << RED << "ERROR - can't get lower lvl" << std::endl;
	}
}

std::string	Bureaucrat::getName(void) const {

	return (this->_name);
}

int			Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Grade can't get any lower #loser");
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Grade can't get any higher #wolf");
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();

	return (o);
}