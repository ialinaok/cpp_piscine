/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:51:51 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/22 22:21:35 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm {

	public:
		AForm();
		AForm(std::string name, int sign_grade, int exec_grade);
		AForm(AForm const & src);
		~AForm();
		AForm &	operator=(AForm const & rhs);

		void			beSigned(Bureaucrat const & pen);
		virtual void	execute(Bureaucrat const & executor) const = 0; //makes no sense to implement it here, but I want a general function to check requirements, so I want to have
		void			checkExecuteRequirements(Bureaucrat const & executor);   //so I want to have this function instead that I will implement and derived classes will inherit

		const std::string	getName(void) const;
		bool				getSignedStatus(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;

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

		class	FormNotSignedException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
		std::string			_target;
};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif