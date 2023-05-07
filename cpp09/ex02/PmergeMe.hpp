/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:45:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/05/07 01:24:10 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	use positive integer sequence as argument
	./PmergeMe 3 5 9 7 4
	- input checking - convert to numbers and check if they're bigger than 0 and smaller than MAXINT
		but MAX_UINT, because we only accept ints anyway
		check number of args if it's at least 3

	TO-DO:
		✨ check if you need to initialize containers with something
*/

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <deque>
#include <list>
#include <stdexcept>

class	PmergeMe {

	public:
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		PmergeMe(char **input);
		~PmergeMe();

		PmergeMe & operator=(PmergeMe const & rhs);

		bool	checkInts(char **input);

	private:
		std::deque<unsigned int>	_deque;
		std::list<unsigned int>		_list;
};

#endif
