/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getline.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:05:18 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/13 16:57:28 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ios>
#include <istream>

//you cannot give more to getline than you have in array --> s e g f a u l t obv
int	main(void) {

	char	s[6];
	char	yn[2];
	std::ifstream	is;
	// std::basic_ios	is;
	

	std::cout << "aight let's try this one, give me a sentence: " << std::endl;
	std::cin.getline (s, 6); // --> I can only use this syntax with C strings
	//bc this getline was created before the string class
	std::cout << "error: " << is.rdstate() << " is this the message? " << std::endl;
	std::cout << "goodbit: " << is.good() << " eofbit: " << is.eof();
	std::cout << " failbit: " << is.fail() << " badbit: " << is.bad() << std::endl;

	//goodbit returns a 1 if everything is fine, which happens in the case where
	//I put more than 6 chars in the sentence BUT then the rest of the program is not 
	//working properly -- it's not waiting for the second input from the result.
	//failbit should be set when there's more chars than 6 given, aka the getline function
	//stops reading bc limit of chars is reached before nl is found. but it doesn't get set. hm

	std::cout << "goodbit: " << is.goodbit << " eofbit: " << is.eofbit;
	std::cout << " failbit: " << is.failbit << " badbit: " << is.badbit << std::endl;

	std::cout << s << " >>> if that worked, enter Y, if not, enter N: " << std::endl;
	std::cin >> yn;
	std:: cout << "the result is: " << yn << std::endl;

	return (0);
}