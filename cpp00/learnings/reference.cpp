/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reference.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:39:18 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/15 17:42:05 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int	main(void) {

	int	a = 42;
	int	&b = a;

	printf("this is address of a: %p\n", &a);
	printf("this is address of b: %p\n", &b);

	// it's the same address
	return (0);
}