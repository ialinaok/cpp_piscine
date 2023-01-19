/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:12:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/19 21:51:48 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>

// *** COLORS ***//
# define BLANK "\e[0m"
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define BL "\033[0;34m"
# define PU "\033[0;35m"
# define CY "\033[0;36m"
# define WH "\033[0;37m"
# define D "\033[0m"

class	PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

		int		add_contact_to_array(Contact new_contact, int index);
		Contact	get_contact(int index) const;
		int		get_nb_contacts_added(void) const;
		bool	get_is_full(void) const;
		bool	valid_index(std::string str) const;
		void	get_contact_data(PhoneBook *the_book, int index);
		void	search_contacts(PhoneBook *the_book) const;
		void	print_table(PhoneBook *the_book) const;

	private:
		static int	_nb_contacts_added;
		static bool	_is_full;

		Contact	_list_of_contacts[8];
};

#endif