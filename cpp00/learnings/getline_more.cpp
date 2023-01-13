/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getline_more.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:08:38 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/13 19:21:55 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string	s;

	std::cout << "say something: ";
	std::cin >> s;
	std::cout << "the string is: " << s << std::endl;
	std::cout << "say sth more: ";
	getline(std::cin, s);
	std::cout << "the string is: " << s << std::endl;

	return (0);
}