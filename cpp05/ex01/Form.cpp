/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:16:52 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/19 17:22:09 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("General Form"), _grade_sign(123), _grade_exec(100), _signed(false) {

	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int sign_grade, int exec_grade) :
_name(name), _signed(false), _grade_sign(sign_grade), _grade_exec(exec_grade) {

	std::cout << "Form parametric constructor called" << std::endl;
}

Form::Form(Form const & src) :
_name(src._name), _signed(src._signed), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){

	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form() {

	std::cout << "Form destructor called" << std::endl;
}

Form &	Form::operator=(Form const & rhs) {

	if (this != &rhs)
		this->_signed = rhs._signed;
}


void	Form::beSigned(Bureaucrat const & pen) {

	pen.getGrade() >= this->_grade_exec ? this->_signed = true : throw Form::GradeTooLowException();
}


const std::string	Form::getName(void) const {

	return (this->_name);
}

bool	Form::getSignedStatus(void) const {

	return (this->_signed);
}

const int	Form::getGradeSign(void) const {

	return (this->_grade_sign);
}

const int	Form::getGradeExec(void) const {

	return (this->_grade_exec);
}

const char*	Form::GradeTooLowException::what() const throw() {

	return ("Form cannot be signed, Bureaucrat's lvl is too low");
}

//this makes no sense to have for signing, but it does make sense to have them in initialization
const char*	Form::GradeTooHighException::what() const throw() {

	return ("Form cannot be signed, Bureaucrat's lvl is too high");
}
