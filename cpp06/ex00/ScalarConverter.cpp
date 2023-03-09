/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:54:05 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/09 21:23:32 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const & src) {

	(void) src;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs) {

	(void) rhs;
	return (*this);
}

/*  Function takes a string and checks whether it's correct numeric input
	(only digits, one dot, '+' or '-' sign) */

bool	ScalarConverter::check_numeric_input(std::string literal) {

	bool	dot_encountered = false;
	for (std::string::const_iterator it = literal.begin(); it != literal.end(); it++) {

		if (*literal.begin() == '-' || *literal.begin() == '+')
			continue ;
		if (!std::isdigit(*it)) {

			if (*it == '.' && !dot_encountered)
				dot_encountered = true;
			else
				return (false);
		}
	}
	std::cout << GREEN << "here" << std::endl;
	return (true);
}

/* function analyses the string and returns values:
	0 - char
	1 - float
	2 - double
	3 - int
	-1 wrong input or -inff +inff nanff -inf +inf nan */

int	ScalarConverter::detect_type(std::string literal) {

	int	ret = -1;

	if (literal.length() == 1 && std::isdigit(literal[0]) == 0) {

		std::cout << GREEN << "char" << std::endl;
			ret = 0;
	}
	else if (literal[literal.length() - 1] == 'f') {
		std::cout << GREEN << "float" << std::endl;

		if (ScalarConverter::check_numeric_input(literal.erase(*(literal.end() - 1))))
			ret = 1; //float
	}
	else if (literal.find('.') != std::string::npos) {
		std::cout << GREEN << "dbl" << std::endl;

		if (ScalarConverter::check_numeric_input(literal))
			ret = 2; //double
	}
	else if (ScalarConverter::check_numeric_input(literal)) {

		std::cout << GREEN << "int" << std::endl;
		double	tmp = atof(literal.c_str());
		if (tmp >= INT_MIN && tmp <= INT_MAX)
			ret = 3; //int
		else
			ret = 2;
	}
	return (ret);
}

void	ScalarConverter::convert(std::string literal) {

	int	type = ScalarConverter::detect_type(literal);

	std::cout << GREEN << "type: " << type << std::endl;
	if (type == 0)
		ScalarConverter::convert_char(literal);
	else if (type == 1)
		ScalarConverter::convert_float(literal);
	else if (type == 2)
		ScalarConverter::convert_double(literal);
	else if (type == 3)
		ScalarConverter::convert_int(literal);
	else if (type == -1)
		ScalarConverter::convert_exceptional(literal);
}

void	ScalarConverter::convert_char(std::string literal) {

	char	c;
	float	f;
	double	d;
	int		i;

	c = literal[0]; //conversion from string to actual type
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	i = static_cast<int>(c);

	ScalarConverter::display_all(c, f, d, i, 1);
}

void	ScalarConverter::convert_float(std::string literal) {

	char	c;
	float	f;
	double	d;
	int		i;

	f = atof(literal.c_str()); //conversion from string to actual type
	c = static_cast<char>(f);
	d = static_cast<double>(f);
	i = static_cast<int>(f);

	ScalarConverter::display_all(c, f, d, i, literal.size() - literal.find_first_of('.'));
}

void	ScalarConverter::convert_double(std::string literal) {

	char	c;
	float	f;
	double	d;
	int		i;

	d = atof(literal.c_str()); //conversion from string to actual type
	c = static_cast<char>(d);
	f = static_cast<float>(d);
	i = static_cast<int>(d);

	ScalarConverter::display_all(c, f, d, i, literal.size() - literal.find_first_of('.') + 1);
}

void	ScalarConverter::convert_int(std::string literal) {

	char	c;
	float	f;
	double	d;
	int		i;

	i = atoi(literal.c_str()); //conversion from string to actual type
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	
	std::cout << YELL << f << d << std::endl;

	ScalarConverter::display_all(c, f, d, i, 1);
}

void	ScalarConverter::convert_exceptional(std::string literal) {

	std::cout << YELL << "char: " << WH << "impossible" << std::endl;
	std::cout << YELL << "int: " << WH << "impossible" << std::endl;

	if (literal == "nan" || literal == "-inf" || literal == "+inf") {

		std::cout << YELL << "float: " << WH << literal << "f" << std::endl;
		std::cout << YELL << "double: " << WH << literal << std::endl;
	}
	else if (literal == "nanf" || literal == "-inff" || literal == "+inff") {

		std::cout << YELL << "float: " << WH << literal << std::endl;
		std::cout << YELL << "double: " << WH << literal.erase(*(literal.end() - 1)) << std::endl;
	}
}

void	ScalarConverter::display_all(char c, float f, double d, int i, int precision) {

	if (std::isprint(c) != 0)
		std::cout << YELL << "char: " << WH << "\'" << c << "\'" << std::endl;
	else
		std::cout << RED << "error: " << WH << "char is a non-displayable char after conversion" << D << std::endl;
	if (i >= INT_MIN && i <= INT_MAX)
		std::cout << YELL << "int: " << WH << i << std::endl;
	else
		std::cout << RED << "error: " << WH << "int overflows after conversion" << std::endl;
	if (f >= -FLT_MIN && f <= FLT_MAX)
		std::cout << YELL << "float: " << WH << std::fixed << std::setprecision(precision) << f << "f" << std::endl;
	else
		std::cout << RED << "error: " << WH << "float overflows after conversion" << std::endl;
	if (d >= -DBL_MIN && d <= DBL_MAX)
		std::cout << YELL << "double: " << WH << std::fixed << std::setprecision(precision) << d << std::endl;
	else
		std::cout << RED << "error: " << WH << "double overflows after conversion" << std::endl;
}