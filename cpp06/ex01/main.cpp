/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:26:23 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/20 17:31:22 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main() {

	Data	wisdom;
	wisdom.quote = "reality is merely an illusion";
	wisdom.page = 17;

	uintptr_t	serialized;
	Data		*deserialized;

	std::cout << BLA "---------------------------------------" WH << std::endl;
	std::cout << BLA "--------" WH "DATA CONTENTS & ADDRESS" BLA "--------" << std::endl;
	std::cout << BLA "---------------------------------------" WH << std::endl;

	std::cout << WH "original quote: " PU << wisdom.quote << WH << std::endl;
	std::cout << "original page: " CY << wisdom.page << WH << std::endl;
	std::cout << "original address: " YELL << &wisdom << WH << std::endl;

	std::cout << BLA "-------------------------------------------" WH << std::endl;
	std::cout << BLA "--------" WH "SERIALIZING & DESERIALIZING" BLA "--------" << std::endl;
	std::cout << BLA "-------------------------------------------" WH << std::endl;

	serialized = Serializer::serialize(&wisdom);
	deserialized = Serializer::deserialize(serialized);

	std::cout << "serialized [uintptr_t]: " BLU << serialized << WH << std::endl;
	std::cout << "deserialized [Data *]: " YELL << deserialized << WH << std::endl;

	std::cout << WH "deserialized quote: " PU << deserialized->quote << WH << std::endl;
	std::cout << "deserialized page: " CY << deserialized->page << WH << std::endl;

	return (0);
}