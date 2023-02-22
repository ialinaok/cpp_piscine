/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:16:52 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/22 18:48:10 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("C1-ZPF"),  _signed(false), _grade_sign(123), _grade_exec(100) {

	// std::cout << "Form default constructor called" << std::endl;
}

Form::Form(Form const & src) :
_name(src._name), _signed(src._signed), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){

	// std::cout << "Form copy constructor called" << std::endl;
}

Form::Form(std::string name, int sign_grade, int exec_grade) :
_name(name), _signed(false), _grade_sign(sign_grade), _grade_exec(exec_grade) {

	if (exec_grade > 150 || sign_grade > 150)
		throw GradeTooLowException();
	if (exec_grade < 1 || sign_grade < 1)
		throw GradeTooHighException();
	// std::cout << "Form parametric constructor called" << std::endl;
}

Form::~Form() {

	// std::cout << "Form destructor called" << std::endl;
}

Form &	Form::operator=(Form const & rhs) {

	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

void	Form::beSigned(Bureaucrat const & pen) {

	if (this->_signed == true) {

		throw Form::AlreadySignedException();
		return ;
	}
	pen.getGrade() <= this->_grade_exec ? this->_signed = true : throw Form::GradeTooLowException();
}

const std::string	Form::getName(void) const {

	return (this->_name);
}

bool	Form::getSignedStatus(void) const {

	return (this->_signed);
}

int	Form::getGradeSign(void) const {

	return (this->_grade_sign);
}

int	Form::getGradeExec(void) const {

	return (this->_grade_exec);
}

const char*	Form::GradeTooLowException::what() const throw() {

	return ("Form cannot be signed, Bureaucrat's lvl is too low");
}

//this makes no sense to have for signing, but it does make sense to have them in initialization
const char*	Form::GradeTooHighException::what() const throw() {

	return ("Form cannot be signed, Bureaucrat's lvl is too high");
}

const char*	Form::AlreadySignedException::what() const throw() {

	return ("Form already signed");
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs) {

	o << YELL << rhs.getName() << D << " requires lvl " << PU << rhs.getGradeSign() << D << " to sign, and lvl ";
	o << BLU << rhs.getGradeExec() << D << " to execute. The form is currently ";
	if (rhs.getSignedStatus() == true)
		o << GREEN << "signed" << D;
	else
		o << RED << "unsigned" << D;
	return (o);
}
