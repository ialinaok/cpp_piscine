/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardon.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:02:05 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/22 22:02:41 by apielasz         ###   ########.fr       */
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

		void	execute(Bureaucrat const & executor) const;
};

#endif