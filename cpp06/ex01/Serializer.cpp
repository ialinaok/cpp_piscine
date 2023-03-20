/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:20:29 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/20 18:00:34 by apielasz         ###   ########.fr       */
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

uintptr_t	Serializer::serialize(data *ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}
data			*Serializer::deserialize(uintptr_t raw) {

	return (reinterpret_cast<data *>(raw));
}