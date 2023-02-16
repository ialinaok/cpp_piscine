/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:11:52 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 17:51:30 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << PU << "Brain default constructor called" << D << std::endl;
}

Brain::Brain(Brain const & src) {

	if (this != &src) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain() {

	std::cout << RED << "Brain destructor called" << D << std::endl;
}

Brain &	Brain::operator=(Brain const & rhs) {

	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
	std::cout << "Brain copy assignment operator called" << std::endl;
}

const std::string	Brain::getIdea(int i) const {

	if (i < 100)
		return (this->_ideas[i]);
	return ("");
}
void				Brain::setIdea(std::string idea, int i) {

	if (i < 100)
		this->_ideas[i] = idea;
}