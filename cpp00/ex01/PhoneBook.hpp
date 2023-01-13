/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:12:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/13 22:34:51 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class	PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

		int		add_contact_to_list(Contact *new_contact, int index);
		Contact	*get_contact(int index) const;

	private:
		Contact	*_list_of_contacts[8];
};

#endif