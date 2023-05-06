/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:50:47 by apielasz          #+#    #+#             */
/*   Updated: 2023/05/04 16:18:51 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//stack & vector maybe? for the tokens
/*
1. push numbers to stack until you encounter the operator
2. apply the operator on the last two numbers, store in a variable
3. remove these two numbers from stack
4. store the result on the top of the stack
5. push next numbers to the stack until you meet the operator again
6. repeat 1-5 until you reach the end of the list

I will assume that we always get correct expression - no need to check input?
*/

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include <stack>
#include <cstdlib>
#include <vector>

class	RPN {

	public:
		RPN(); //I think I will put it in private - so that RPN object never gets constructed without input str
		RPN(std::string input);
		RPN(RPN const & src);
		~RPN();
		RPN &	operator=(RPN const & rhs);

		bool	isValidRPN(std::string input); //[doesn't check if expression is valid logically]
		bool	evaluateRPN(void);
		void	addToStack(std::string);

	private:
		std::stack<int>				_operationsHappenHere;
		std::vector<std::string>	_tokenList;
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

#endif
