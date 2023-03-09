/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:54:15 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/04 16:16:53 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {

	int	a = 42;

	int const	*b = &a;					//Implicit promotion
	int			*c = b;						//Implicit demotion --> will not work
	int			*d = const_cast<int *>(b);	//Explicit demotion --> will be fine
}

//we can perform type qualifiers cast
//when you use it, it usually means you've designed your code badly ;)
//an example to use, is when you're working with some other library