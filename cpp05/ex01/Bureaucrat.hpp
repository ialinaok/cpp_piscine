/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:24:24 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/19 17:18:18 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

// class	Form;

class	Bureaucrat {

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		Bureaucrat &	operator=(Bureaucrat const & rhs);

		void	increment(void);
		void	decrement(void);
		void	signForm(Form & form);

		std::string	getName(void) const;
		int			getGrade(void) const;

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

	private:
		const std::string	_name;
		int					_grade; // 1 is the highest, 150 is the lowest
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs);

// *** COLORS ***//
# define BLANK "\e[0m"
# define BLA "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define BLU "\033[0;34m"
# define PU "\033[0;35m"
# define CY "\033[0;36m"
# define WH "\033[0;37m"
# define D "\033[0m"

#endif