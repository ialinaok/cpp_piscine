/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:20:29 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/11 17:25:46 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const & src) {

	(void)src;
}

Serializer::~Serializer() {}

Serializer &	Serializer::operator=(Serializer const & rhs) {

	(void)rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}
Data			*Serializer::deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data *>(raw));
}