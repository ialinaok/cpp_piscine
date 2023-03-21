/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:40:59 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/21 15:28:32 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T & x, T & y) {

	T	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T const &	max(T const & x, T const & y) {

	return (x > y ? x : y);
}

template <typename T>
T const &	min(T const & x, T const & y) {

	return (x < y ? x : y);
}

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