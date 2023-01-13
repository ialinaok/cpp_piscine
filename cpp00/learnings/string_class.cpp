/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:12:57 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/13 16:27:52 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//in c++ a string that is not initialized defualts to an empty string
int	main(void) {

	std::string hi = "hi"; //creating a string object (instance of string class)
	//that has some members in it
	std::string there = "there";
	there += "!";

	std::cout << hi + " " + there << std::endl;

	std::string full = hi + " " + there;
	std::cout << full.length() << std::endl;
	std::cout << full.insert(2, "ajaj") << std::endl;
	// std::cout << full << std::endl;
}