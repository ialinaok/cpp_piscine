/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:02:05 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/28 16:29:50 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARDON_H
# define PARDON_H

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm {

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm();
		PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);

		bool	execute(Bureaucrat const & executor) const;
};

#endif