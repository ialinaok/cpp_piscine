/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:16:10 by apielasz          #+#    #+#             */
/*   Updated: 2023/04/28 14:44:56 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(23);
	mstack.push(42);
	mstack.push(200);
	mstack.push(80);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	MutantStack<int>::const_iterator cit = mstack.begin();
	MutantStack<int>::iterator cite = mstack.end();

	std::cout << WH ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" D << std::endl; 
	std::cout << PU "-> const iterator pointing to the first element of the stack" D << std::endl; 
	std::cout << BLA "	mstack.begin()" D << *cit << std::endl;
	// *cit = 42; //-> this will not compile - const iterator

	std::cout << CY "-> iterating through stack with non-const iterator\n-> printing values of its elements" D << std::endl;
	int	i = 0;
	while (it != ite) {
		std::cout << BLA "	mstack[" << i << "] = " D;
		std::cout << *it << std::endl;
		++it;
		++i;
	}

	std::cout << BLU << "-> accessing mstack[2]" D << std::endl;
	std::cout << BLU "	mstack[2] = " D << mstack[2] << std::endl;

	std::cout << GREEN "-> testing functions of stack: " D << std::endl;
	std::cout << BLA "	stack.top() = " D << mstack.top() << std::endl;
	std::cout << BLA "	stack.size() = " D << mstack.size() << std::endl;
	std::cout << BLA "	stack.pop()" BLA << "[top element will be removed]" D << std::endl;
	mstack.pop();
	std::cout << BLA "	stack.size() = " D << mstack.size() << std::endl;

	std::cout << YELL "-> iterating through stack with non-const iterator\n-> printing values of its elements and changing them to 42" D << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite) {
		std::cout << BLA "	mstack[" << i << "] = " D;
		std::cout << *it << std::endl;
		*it = 42;
		++it;
	}
	
	cit = mstack.begin();
	cite = mstack.end();
	std::cout << RED << "-> iterating through stack again, this time with const_iterator\n>> printing values of its elements" D << std::endl;
	while (cit != cite) {
		std::cout << BLA "	mstack[" << i << "] = " D;
		std::cout << *cit << std::endl;
		++cit;
	}

	std::cout << std::endl; 
	
    //*** tests from the subject pdf ***//
    //*** LIST ***//
//     std::cout << "<<< LIST >>>" << std::endl;
//     std::list<int> lst;
	
//     lst.push_back(5);
//     lst.push_back(17);
	
//     std::cout << lst.back() << std::endl; 
	
//     lst.pop_back();
	
//     std::cout << lst.size() << std::endl;
	
//     lst.push_back(3);
//     lst.push_back(5);
//     lst.push_back(737);
//     //[...] lst.push(0);

//     std::list<int>::iterator lit = lst.begin();
//     std::list<int>::iterator lite = lst.end();
	
//     ++lit;
//     --lit;
//     while (lit != lite) {
//         std::cout << *lit << std::endl;
//         ++lit;
//     }

    //*** MUTANT ***//
//     std::cout << "<<< MUTANT >>>" << std::endl;
//     MutantStack<int> mstack;
	
//     mstack.push(5);
//     mstack.push(17);
	
//     std::cout << mstack.top() << std::endl; 
	
//     mstack.pop();
	
//     std::cout << mstack.size() << std::endl;
	
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...] mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
	
//     ++it;
//     --it;
//     while (it != ite) {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack); 
//     return 0;
}