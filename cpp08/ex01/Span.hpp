/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:14:31 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/30 20:32:56 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>

template <typename T> 
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
		void	addMany(Span & span);

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
}

#endif