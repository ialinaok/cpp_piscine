/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:30:09 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/09 16:15:46 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class	Fixed {

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const& src);
		Fixed&	operator=(Fixed const& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fixed_point;
		static const int	_frac_bits;
};

// *** COLORS ***//
# define BLANK "\e[0m"
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define BL "\033[0;34m"
# define PU "\033[0;35m"
# define CY "\033[0;36m"
# define WH "\033[0;37m"
# define D "\033[0m"

#endif