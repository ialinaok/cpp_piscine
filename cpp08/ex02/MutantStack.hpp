/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:56:04 by apielasz          #+#    #+#             */
/*   Updated: 2023/04/28 12:16:39 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

#include <iostream>
#include <deque>
#include <stack>

// T is the type of elements in the container. there are some functions that are predefined for stack

template <typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container> {

	public:
//default constructor, copy constructor and destructor delegating to std::stack
		MutantStack() : std::stack <T, Container>() {}
		MutantStack(MutantStack const & src) : std::stack <T, Container>(src) {}
		// ~MutantStack() = default; //could use that from C++11
		~MutantStack() {}
//assignment operator overload delegating to std::stack's = operator overload
		MutantStack & operator=(MutantStack const & rhs) {
			std::stack <T, Container>::operator=(rhs);
			return (*this);
		}
//iterator functions
		typedef typename Container::iterator iterator;

		iterator	begin(void) {
			return (this->c.begin());
		}
		iterator	end(void) {
			return (this->c.end());
		}
//const iterator functions
		typedef typename Container::const_iterator const_iterator;

		const_iterator	begin(void) const {
			return (this->c.begin());
		}
		const_iterator	end(void) const {
			return (this->c.end());
		}
//[] operator overload
		typedef typename Container::reference reference;
		typedef typename Container::size_type index;

		reference	operator[](index i) {
			return (this->c[i]);
		}
};

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