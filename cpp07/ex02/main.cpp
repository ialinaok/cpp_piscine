/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:02:01 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/22 18:43:12 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
	int	size = 5;
    Array<int> numbers(size);
    int* mirror = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        const int value = rand();
        numbers[i] = value;
		std::cout << YELL << "numbers[" << i << "] = " << WH << numbers[i] << std::endl;
        mirror[i] = value;
		std::cout << CY << "mirror[" << i << "] =  " << WH << mirror[i] << std::endl;
    }
    {
		std::cout << GREEN << "copying numbers to tmp with = operator" << WH << std::endl;
        Array<int> tmp = numbers;
		for (int i = 0; i < size; i++) {
			std::cout << YELL << "numbers[" << i << "] = " << WH << numbers[i] << std::endl;
			std::cout << CY << "tmp[" << i << "] =     " << WH << tmp[i] << std::endl;
		}
		std::cout << GREEN << "copying numbers to tmp with copy constructor" << WH << std::endl;
        Array<int> test(tmp);
		for (int i = 0; i < size; i++) {
			std::cout << YELL << "numbers[" << i << "] = " << WH << numbers[i] << std::endl;
			std::cout << CY << "test[" << i << "] =    " << WH << test[i] << std::endl;
		}
    }

    for (int i = 0; i < size; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << RED << "trying to get element from index '-2'" << D << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << RED << "trying to get element from index '5'" << D << std::endl;
    try
    {
        numbers[size] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
//filling the array again with new values - can be reused with no leaks?
    for (int i = 0; i < size; i++)
    {
        numbers[i] = rand();
		std::cout << YELL << "numbers[" << i << "] = " << WH << numbers[i] << std::endl;
    }
    delete [] mirror;
    return 0;
}
