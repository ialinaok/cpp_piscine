/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:42:41 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/09 18:15:58 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "init.hpp"

// you put parameters when you create an instance, so that constructor can use 
// them when the constructor is !!! automatically called !!!
// (meaning, you cannot just call the constructor function and pass the params then)
int	main(void) {

	Init1	instance_of_Init1('a', 23, 23.42f);
	Init2	instance_of_Init2('z', 42, 42.23f);

	return (0);
}