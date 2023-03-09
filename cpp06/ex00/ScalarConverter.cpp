/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:54:05 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/09 23:52:27 by ialinaok         ###   ########.fr       */
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
		double	tmp = std::strtod(literal.c_str(), NULL);
		if (tmp >= INT_MIN && tmp <= INT_MAX)
			ret = 3; //int
		else if (tmp <= std::numeric_limits<double>::lowest() || tmp >= std::numeric_limits<double>::max())
			ret = 2;
	}
	return (ret);
}

void	ScalarConverter::convert(std::string literal) {

	std::string	char_str = "";
	std::string	float_str = "";
	std::string	int_str = "";
	std::string	excep[7] = {"nan", "+inf", "-inf", "nanf", "+inff", "-inff"};

	int		type = ScalarConverter::detect_type(literal);
	int		precision = 1;
	char	c;
	float	f;
	double	d;
	int		i;

	std::cout << PU << type << std::endl;
	switch (type) {

		case (EXCEP_CONV) : {

			int	n = 0;
			while (n < 6) {

				if (excep[n] == literal) {

					char_str = "impossible";
					int_str = "impossible";
					if (n < 3) {
						
						d = strtod(literal.c_str(), NULL);
						f = static_cast<float>(d);
					}
					else {

						f = strtof(literal.c_str(), NULL);
						d = static_cast<float>(f);
					}
					break ;
				}
				n++;
			}
			if (n == 6)
				throw ScalarConverter::InvalidValueException();
			break ;
		}
		case (CHAR_CONV) : {
			
			c = literal[0];
			f = static_cast<float>(c);
			d = static_cast<double>(c);
			i = static_cast<int>(c);
			break ;
		}
		case (FLT_CONV) : {
			
			f = std::strtof(literal.c_str(), NULL);
			if (errno == ERANGE)
				throw ScalarConverter::InvalidValueException();
			if (f < 0 || f > 127)
				char_str = "impossible";
			else if ((f >= 0 && f < 31) || f == 127.0f)
				char_str = "non-displayable";
			else
				c = static_cast<char>(f);
			d = static_cast<double>(f); //casting float to double will not overflow bc double can represent bigger values
			if (f <= INT_MIN || f >= INT_MAX)
				throw ScalarConverter::InvalidValueException();
			i = static_cast<int>(f);
			precision = literal.size() - literal.find_first_of('.');
			break;
		}
		case (DBL_CONV) : {
			
			d = std::strtod(literal.c_str(), NULL);
			if (errno == ERANGE)
				throw ScalarConverter::InvalidValueException();
			if (d < 0 || d > 127)
				char_str = "impossible";
			else if ((d >= 0 && d < 31) || d == 127.0)
				char_str = "non-displayable";
			else
				c = static_cast<char>(d);
			if (d <= std::numeric_limits<float>::lowest() || d >= std::numeric_limits<float>::max()) //but double can overflow float, so gotta check
				float_str = "impossible";
			f = static_cast<float>(d);
			if (d <= INT_MIN || d >= INT_MAX)
				int_str = "impossible";
			i = static_cast<int>(d);
			precision = literal.size() - literal.find_first_of('.');
			break;
		}
		case (INT_CONV) : {

			i = std::atoi(literal.c_str());
			if (i < 0 || i > 127)
				char_str = "impossible";
			else if ((i >= 0 && i < 31) || i == 127.0)
				char_str = "non-displayable";
			else
				c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
			break;
		}
	}
	if (!char_str.empty())
		std::cout << YELL << "char: " << WH << char_str << std::endl;
	else
		std::cout << YELL << "char: " << WH << "\'" << c << "\'" << std::endl;
	if (!int_str.empty())
		std::cout << YELL << "int: " << WH << char_str << std::endl;
	else
		std::cout << YELL << "int: " << WH << i << std::endl;
	if (!float_str.empty())
		std::cout << YELL << "float: " << WH << char_str << std::endl;
	else
		std::cout << YELL << "float: " << WH << std::fixed << std::setprecision(precision) << f << "f" << std::endl;
	std::cout << YELL << "double: " << WH << std::fixed << std::setprecision(precision) << d << std::endl;
}

const char*	ScalarConverter::InvalidValueException::what() const throw() {

	return ("The input value is incorrect (possibly overflows)");
}