/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:14:31 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/29 18:32:14 by apielasz         ###   ########.fr       */
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
		void	fillSpanObj(Span & obj);

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
		std::vector<int>	_arr;
}

#endif