/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:03:15 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/22 18:45:39 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {

	public:
		Form();
		Form(std::string name, int sign_grade, int exec_grade);
		Form(Form const & src);
		~Form();
		Form &	operator=(Form const & rhs);

		void	beSigned(Bureaucrat const & pen);

		const std::string	getName(void) const;
		bool				getSignedStatus(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		class	AlreadySignedException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif