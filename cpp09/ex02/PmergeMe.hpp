/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:45:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/05/10 14:00:24 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	use positive integer sequence as argument
	./PmergeMe 3 5 9 7 4
	- start the timer for input checking ✅
	- input checking
		- check number of args if it's at least 3 (main) ✅
		- convert to numbers and check if they're bigger than 0 and smaller than MAXINT (checkInts()) ✅
		- adding numbers to containers ✅
	- print out container before sorting ✅
	- perform algorithm for both contaners 
	- print out container after sorting
	- print out timer messages

*/

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <deque>
#include <list>
#include <stdexcept>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <iomanip>
#include <sys/time.h>

class	PmergeMe {

	public:
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		PmergeMe(char **input);
		~PmergeMe();

		PmergeMe & operator=(PmergeMe const & rhs);

		void	letsGo(void);
		double	getTime(void);
		template <typename T> void	printContainer(T const &container);

//list functions
		void						sortList(int start_idx, int end_idx);
		void						mergeList(int start_idx, int mid_idx, int end_idx);
		void						insertList(int start_idx, int mid_idx);
		int 						getValueAtIndex(std::list<int> input, int index);

//deque functions
		void	sortDeque(int start_idx, int end_idx);
		void	mergeDeque(int start_idx, int mid_idx, int end_idx);
		void	insertDeque(int start_idx, int mid_idx);

	private:
		std::deque<int>		_deque;
		std::list<int>		_list;
		int					_K;
		double				_timeInputCheck;
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
