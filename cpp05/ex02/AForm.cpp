/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:52:44 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/22 22:31:45 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("C1-ZPF"),  _signed(false), _grade_sign(123), _grade_exec(100), _target("PlanetB") {

	// std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(AForm const & src) :
_name(src._name), _signed(src._signed), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec), _target(src._target) {

	// std::cout << "AForm copy constructor called" << std::endl;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) :
_name(name), _signed(false), _grade_sign(sign_grade), _grade_exec(exec_grade) {

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

	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

void	AForm::beSigned(Bureaucrat const & pen) {

	if (this->_signed == true) {

		throw AForm::AlreadySignedException();
		return ;
	}
	pen.getGrade() <= this->_grade_exec ? this->_signed = true : throw AForm::GradeTooLowException();
}

void	AForm::checkExecuteRequirements(Bureaucrat const & executor) {

	if (this->_signed == false) {

		throw FormNotSignedException();
		return ;
	}
	if (executor.getGrade() > this->_grade_exec)
		throw GradeTooLowException();
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
	o << BLU << rhs.getGradeExec() << D << " to execute. The form is currently ";
	if (rhs.getSignedStatus() == true)
		o << GREEN << "signed" << D;
	else
		o << RED << "unsigned" << D;
	return (o);
}
