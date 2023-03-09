/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explicit.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:33:11 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/04 17:40:36 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	A {};
class	B {};
class	C {

	public:
				 C(A const & ...) { return; } //allows to construct an instance of C from A
		explicit C(B const & ...) { return; } //allows to construct an instance of C from B but we have explicit
											 //will prevent implicit construction of C class from B class
};

void	f(C const & ...) { //accepts instance of C class

	return;
}

int	main() {

	f( A()); //Implicit conversion OK
	// f( B()); //Implicit conversion NOT OK
}