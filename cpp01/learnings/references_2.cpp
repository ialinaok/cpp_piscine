/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references_2.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:54:53 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/21 19:47:21 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	byPtr(std::string* str) {

	*str += " and ponies";
}

void	byConstPtr(std::string const * str) {

	std::cout << *str << std::endl;
}

void	byRef(std::string& str) {

	str += " and ponies";
}

void	byConstRef(std::string const & str) {

	std::cout << str << std::endl;
}

int	main(void) {

	std::string str = "I like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
}
