/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinterpret.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:45:42 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/04 15:52:12 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {

	float	a = 420.042f;

	void	*b = &a;							//Implicit promotion
	int		*c = reinterpret_cast<int *>(b);	//Explicit demotion
	int &	d = reinterpret_cast<int &>(b);		//Explicit demotion
}

//with this one, compiler will not complain and all the mistakes are on you