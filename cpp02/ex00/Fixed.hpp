/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:30:09 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 21:37:14 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class	Fixed {

	public:
		Fixed();
		Fixed(Fixed const& src);
		~Fixed();
		Fixed&	operator=(Fixed const& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fix_point;
		static const int	_frac_bits;
};

#endif