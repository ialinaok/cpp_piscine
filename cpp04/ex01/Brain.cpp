/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:11:52 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 21:12:10 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << PU << "Brain default constructor called" << D << std::endl;
}

Brain::Brain(Brain const & src) {

	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain() {

	std::cout << RED << "Brain destructor called" << D << std::endl;
}

Brain &	Brain::operator=(Brain const & rhs) {

	std::cout << "Brain copy assignment operator called" << std::endl;
	(void) rhs;
	return (*this);
}

const std::string	Brain::getIdea(int i) const {

	if (i >= 100)
		return ("WRONGGG");
	return (this->_ideas[i]);
}
void				Brain::setIdea(std::string idea, int i) {

	if (i >= 100) {

		std::cout << "WRONGGG" << std::endl;
		return;
	}
	this->_ideas[i] = idea;
}