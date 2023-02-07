/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overload.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:21:13 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 17:07:44 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_OVERLOAD_H
# define OPERATOR_OVERLOAD_H

#include <iostream>

class	Integer {

	public:
		Integer(int const n);
		~Integer() {};

		int	getValue(void) const;

		Integer&	operator=(Integer const& rhs);
		Integer		operator+(Integer const& rhs) const;

	private:
		int	_n;
};

std::ostream&	operator<<(std::ostream& o, Integer const& rhs);

#endif