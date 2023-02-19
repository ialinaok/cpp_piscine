/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:39:15 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/18 17:58:25 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

void	test1(void) {

	try {

		// do sth here
		if (/* there's an error*/) {

			throw std::exception();
		}
		else {

			//do sth else
		}
	}
	catch (std::exception e) {

		//handle error
	}
}

void	test2(void) {

	try {

		// do sth here
		if (/* there's an error */) {

			throw std::exception();
		}
		else
			//do sth else
	}
}

void	test3() {

	try {

		test2();
	}
	catch (std::exception& e) {

		//handle error
	}
}

void	test4() {

	class	PEBKACException : public std::exception {
		
		public:
			virtual const char	*what() const throw() { //it means that function may throw sth, it can also be defined like
														//throw(DoesntBeepBeepOnlyBoopBoop)
				return ("Problem exists between keyboard and chair.");
			}
	};

	try	{

		test3();
	}
	catch (PEBKACException& e) {

		//handle the fact that user doesn't know how to correctly user
	}
	catch (std::exception& e) {

		//handle other exceptions
	}
}