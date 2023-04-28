/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:12:19 by apielasz          #+#    #+#             */
/*   Updated: 2023/04/28 18:45:24 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <iterator>
#include <algorithm>

class	OccurenceNotFound : public std::exception {
	public:
		virtual const char* what() const throw() {return ("Occurence not found"); }
};

//easyfind that returns pair
template <typename T>
std::pair<typename T::const_iterator, int>	easyfind(T & container, int i) {
	int	ix = 0;
	typename T::iterator	ret = find(container.begin(), container.end(), i);
	if (ret == container.end() && i != *ret)
		throw OccurenceNotFound();
	ix = std::distance(container.begin(), ret);
	return (std::make_pair(ret, ix));
}

//easyfind that returns iterator
// template <typename T>
// typename T::const_iterator	easyfind(T & container, int i) {
// 	for (typename T::const_iterator it = container.begin(); it != container.end(); it++) {

// 		if (*it == i)
// 			return (it);
// 	}
// 	throw OccurenceNotFound();
// }

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