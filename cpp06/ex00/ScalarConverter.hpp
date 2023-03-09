/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:26:51 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/09 20:42:12 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once //tells the preprocessor to include header only once, regardless of how many times it's included in the code

#include <iostream>
#include <string>
#include <cctype>
#include <float.h>
#include <limits>
#include <cstdlib>
#include <iomanip>

class	ScalarConverter {

	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & src);
		~ScalarConverter();
		ScalarConverter & operator=(ScalarConverter const & rhs);

		static void	convert(std::string literal);

		static bool	check_numeric_input(std::string literal);
		static int	detect_type(std::string literal);
		static void	convert_char(std::string literal);
		static void	convert_float(std::string literal);
		static void	convert_double(std::string literal);
		static void	convert_int(std::string literal);
		static void	convert_exceptional(std::string literal);

		static void	display_all(char c, float f, double d, int i, int precision);
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