/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:32:25 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/03 15:36:06 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Parent {};
class	Child1 : public Parent {};
class	Child2 : public Parent {};

//new hierarchy, bc we have classes now ==> derived classes are more specialized versions of parent classes
//we can store derived classes in the base class ptr (polymorphism)

int	main() {

	Child1	a;

	Parent	*b = &a;				//Implicit reinterpratation
	Parent	*c = (Parent *) &a;		//Explicit reinterpretation

	Parent	*d = &a;				//Implicit upcast - OK, bc base class ptr is pointing to derived class ptr
	// Child1	*e = d;					//Implicit downcast - we're trying to assign Parent * to Child1 * - no can do
	Child2	*f = (Child2 *) d;		//Explicit downcast which we can do - we can only downcast explicitly but it should be avoided
}