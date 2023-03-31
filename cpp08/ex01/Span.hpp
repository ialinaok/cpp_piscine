/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:14:31 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/31 19:04:24 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <ctime>
#include <cstdlib>

class	Span {

	public:
		Span();
		Span(unsigned int N);
		Span(Span const & src);
		~Span();

		Span & operator=(Span const & rhs);

		void	addNumber(int new_number);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addMany(std::vector<int> addMe);
		void	fillRandom(std::vector<int> & toFill);
		void	print_vector(void);

		class	NoSpanFound : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class	NoFreeSpaceNoMore : public std:: exception {
			public:
				virtual const char *what() const throw();
		};

	private:
		unsigned int		_N;
		unsigned int		_ix;
		std::vector<int>	_arr;
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