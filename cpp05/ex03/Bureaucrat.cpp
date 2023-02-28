/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:35:45 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/28 16:34:00 by ialinaok         ###   ########.fr       */
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
		std::cout << RED << "ERROR - can't get lower lvl" << D << std::endl;
	}
}

void	Bureaucrat::signForm(AForm & form) {

	try {

		form.beSigned(*this);
	}
	catch (AForm::GradeTooLowException& e) {

		std::cout << this->_name << RED << " couldn't sign " << YELL << form.getName() << D;
		std::cout << " because their grade [" << BLA << this->getGrade() << D << "] is" << RED << " too low" << D << std::endl;
		return ;
	}
	catch (AForm::AlreadySignedException& e) {

		std::cout << WH << "Form " << YELL << form.getName() << WH << " already " << GREEN << "signed" << D << std::endl;
		return ;
	}
	std::cout << this->_name << GREEN << " signed " << YELL <<  form.getName() << GREEN << " successfully" << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form) {

	if (form.execute(*this) == true)
		std::cout << "Form got " << GREEN << "successfully " << D << "executed by " << this->getName() << std::endl;
	else
		std::cout << "Form " << RED << "wasn't executed " << D << "by " << this->getName() << std::endl;
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