/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:26:23 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/11 17:46:17 by ialinaok         ###   ########.fr       */
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

	std::cout << "serialized: " BLU << serialized << WH << std::endl;
	std::cout << "deserialized: " BLU << deserialized << WH << std::endl;

	std::cout << WH "deserialized quote: " PU << wisdom.quote << WH << std::endl;
	std::cout << "deserialized page: " CY << wisdom.page << WH << std::endl;
	std::cout << "deserialized address: " YELL << &deserialized << WH << std::endl;

	return (0);
}