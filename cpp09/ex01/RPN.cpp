/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:04:22 by apielasz          #+#    #+#             */
/*   Updated: 2023/05/07 01:13:35 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _operationsHappenHere(), _tokenList() {}

RPN::RPN(RPN const & src) {

	*this = src;
}

RPN::~RPN() {}

RPN &	RPN::operator=(RPN const & rhs) {
	
	if (this != &rhs) {
		this->_tokenList = rhs._tokenList;
		this->_operationsHappenHere = rhs._operationsHappenHere;
	}
	return (*this);
}

RPN::RPN(std::string input) {
	
	if (input.empty() || !this->isValidRPN(input))
		throw std::invalid_argument("Error: Invalid input. Only accepitng numbers <-9, 9> and {'+', '-', '*', '/'}");
	//at this point _tokenList will be populated
	//by operating on vector with strings I avoid substr and use more containers 🤓
	//so I can operate on stack now and actually do the operations now
	if (this->evaluateRPN())
		std::cout << PU << this->_operationsHappenHere.top() << D << std::endl;
}

/*
	Function takes the input string and parses it into a vector of strings. 
	Each string represents a number <-9, 9> or operator {'+', '-', '*', '/'}.
	Returns true if input is valid.
*/
bool	RPN::isValidRPN(std::string input) {

	std::string	token = "";
	std::string::const_iterator it;
	std::string::const_iterator next;

	for (it = input.begin(); it != input.end(); ++it) {
		next = it + 1;
		if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
			token += *it;
		else if (*it == ' ') {
			this->_tokenList.push_back(token);
			token = "";
			continue ;
		}
		else if (isdigit(*it) && (*next == ' ' || *next == '\0'))
			token += *it;
		else
			return (false);
	}
	this->_tokenList.push_back(token); //to push the last token
	return (true);
}

//hmm I'm literally only using _operationsHappenHere in this one function
//I guess it doesn't make sense to declare it in private, and I can only declare it in the 
//scope of this function. I could have the result in private and save the top of the stack there
//in case it's successful. idk. will debate

bool	RPN::evaluateRPN(void) {

	int	lhsOperand;
	int	rhsOperand;
	std::vector<std::string>::const_iterator it;

	for (it = this->_tokenList.begin(); it != this->_tokenList.end(); ++it) {
	
		if (*it != "+" && *it != "-" && *it != "*" && *it != "/")
			this->_operationsHappenHere.push(std::atoi((*it).c_str()));
		else {
			
			if (this->_operationsHappenHere.empty())
				throw std::logic_error("Missing RHS operand.");
			rhsOperand = this->_operationsHappenHere.top();
			this->_operationsHappenHere.pop();
			if (this->_operationsHappenHere.empty())
				throw std::logic_error("Missing LHS operand.");
			lhsOperand = this->_operationsHappenHere.top();
			this->_operationsHappenHere.pop();

			if (*it == "+")
				this->_operationsHappenHere.push(lhsOperand + rhsOperand);
			else if (*it == "-")
				this->_operationsHappenHere.push(lhsOperand - rhsOperand);
			else if (*it == "*")
				this->_operationsHappenHere.push(lhsOperand * rhsOperand);
			else if (*it == "/")
				this->_operationsHappenHere.push(lhsOperand / rhsOperand);
		}
	}
	if (this->_operationsHappenHere.size() > 1)
		throw std::logic_error("No definite result.");
	else
		return (true);
}