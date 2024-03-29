/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:59:42 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/20 18:00:45 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "data.hpp"
#include <stdint.h>

class	Serializer {

	public:
		Serializer();
		Serializer(Serializer const & src);
		~Serializer();

		Serializer &	operator=(Serializer const & rhs);
	
		static uintptr_t	serialize(data *ptr);
		static data			*deserialize(uintptr_t raw);
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
