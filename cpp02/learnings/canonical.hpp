/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canonical.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:13:24 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 20:17:08 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANONICAL_H
# define CANONICAL_H

#include <iostream>

class Canonical {

	public:
		Canonical();
		Canonical(int const n);
		Canonical(Canonical const& src);
		~Canonical();

		Canonical&	operator=(Canonical const& rhs);

		int	getFoo(void) const;

	private:
		int	_foo;
};

std::ostream&	operator<<(std::ostream& o, Canonical const& i);

#endif