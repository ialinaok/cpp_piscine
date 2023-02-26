/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:52:44 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/26 12:47:33 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("C1-ZPF"), _signed(false), _grade_sign(123), _grade_exec(100), _target("PlanetB") {

	// std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(AForm const & src) :
_name(src._name), _signed(src._signed), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec), _target(src._target) {

	// std::cout << "AForm copy constructor called" << std::endl;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) :
_name(name), _signed(false), _grade_sign(sign_grade), _grade_exec(exec_grade), _target("PlanetB") {

	if (exec_grade > 150 || sign_grade > 150)
		throw GradeTooLowException();
	if (exec_grade < 1 || sign_grade < 1)
		throw GradeTooHighException();
	// std::cout << "AForm parametric constructor called" << std::endl;
}

AForm::~AForm() {

	// std::cout << "AForm destructor called" << std::endl;
}

AForm &	AForm::operator=(AForm const & rhs) {

	if (this != &rhs) {

		this->_signed = rhs._signed;
		this->_target = rhs._target;
	}
	return (*this);
}

void	AForm::beSigned(Bureaucrat const & pen) {

	if (this->_signed == true) {

		throw AForm::AlreadySignedException();
		return ;
	}
	pen.getGrade() <= this->_grade_exec ? this->_signed = true : throw AForm::GradeTooLowException();
}

bool	AForm::checkExecuteRequirements(Bureaucrat const & executor) const {

	try {
		
		if (this->_signed == false)
			throw FormNotSignedException(); // if this is thrown, program will jump immediately to the catch block with matching excp
		if (executor.getGrade() > this->_grade_exec)
			throw GradeTooLowException();
	}
	catch (FormNotSignedException& e) {

		std::cout << RED << "Cannot execute " << YELL << this->getName() << RED << ": form not signed" << std::endl;
		return (false);
	}
	catch (GradeTooLowException& ee) {

		std::cout << RED << "Cannot execute " << YELL << this->getName() << RED << ": executor's grade too low" << std::endl;
		return (false);
	}
	return (true);
}

const std::string	AForm::getName(void) const {

	return (this->_name);
}

bool	AForm::getSignedStatus(void) const {

	return (this->_signed);
}

int	AForm::getGradeSign(void) const {

	return (this->_grade_sign);
}

int	AForm::getGradeExec(void) const {

	return (this->_grade_exec);
}

std::string	AForm::getTarget(void) const {

	return (this->_target);
}

void	AForm::setTarget(std::string target) {

	this->_target = target;
}

const char*	AForm::GradeTooLowException::what() const throw() {

	return ("Form cannot be signed, Bureaucrat's lvl is too low");
}

//this makes no sense to have for signing, but it does make sense to have them in initialization
const char*	AForm::GradeTooHighException::what() const throw() {

	return ("Form cannot be signed, Bureaucrat's lvl is too high");
}

const char*	AForm::AlreadySignedException::what() const throw() {

	return ("Form already signed");
}

const char*	AForm::FormNotSignedException::what() const throw() {

	return ("Form is not yet signed");
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs) {

	o << YELL << rhs.getName() << D << " requires lvl " << PU << rhs.getGradeSign() << D << " to sign, and lvl ";
	o << BLU << rhs.getGradeExec() << D << " to execute. The form's target is: " << CY << this->_target << D;
	o << " The form is currently ";
	if (rhs.getSignedStatus() == true)
		o << GREEN << "signed" << D;
	else
		o << RED << "unsigned" << D;
	return (o);
}
