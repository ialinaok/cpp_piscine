/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:36:11 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/03 16:23:24 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Parent {};
class	Child1 : public Parent {};
class	Child2 : public Parent {};

class	Unrelated {};

int	main() {

	{
		int	a = 42;

		double	b = a;					 //Implicit promotion
		int		c = b;					 //Implicit demotion - do not
		int		d = static_cast<int>(b); //Explicit demotion
										 //I wanna make a static cast of the b expression to the int type
										 //this is casting in C++
	}
	{
		Child1	a;

		Parent	*b = &a;						//Implicit upcast
		// Child1	*c = b;						//Implicit downcast - cannot do
		Child2	*d = static_cast<Child2 *>(b);  //Explicit downcast - casting a pointer or reference to a base class obj
												//to a pointer or a reference to a derived class obj

		// Unrelated	*e = static_cast<Unrelated *>(&a); //Explicit conversion - process of converting a value from one type to another - this will not work and might result in undefined behavior bc
		//static_cast is used to convert between related types (numeric) or between classes in class hierarchy
	}
}