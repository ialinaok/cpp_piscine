/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:58:46 by apielasz          #+#    #+#             */
/*   Updated: 2023/05/04 22:27:43 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "RPN.hpp"

int main(int argc, char **argv) {

    if (argc != 2) {
        std::cout << RED "Error: wrong number of arguments. Provide only 1 string with RPN expression." D << std::endl;
        std::cout << YELL "Correct usage: ./RPN \"2 6 * 1 3 + 5 * + 9 -\"" D << std::endl;
        return (1);
    }
    
    std::string input(argv[1]);
    try {
        RPN rpn(input);
    }
    catch (std::exception &err) {
        std::cout << RED << err.what() << D << std::endl;
        return (1);
    }
    
	return (0);
}