/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:07:13 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/03 14:09:09 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	//TYPE CONVERSION - simply converting one data type into another, bits are rearranged to match new type
	{
		int		a = 42;

		double	b = a;				//Implicit conversion
		double	c = (double) a;		//Explicit conversion

		double	d = a;				//Implicit promotion
		int		e = d;				//Implicit demotion ==> dangerous, avoid
		int		f = (int) d;		//Explicit demotion ==> ok, you're aware of what you're doing, fine
	}
	//TYPE REINTERPRETATION - data is interpreted in a different way than it was intended
	//identity cast - bits are kept in the same order
	{
		float	a = 420.042;

		void	*b = &a;			//Implicit reinterpretation cast
		void	*c = (void *) &a;	//Explicit reinterpretation cast

		void	*d = &a;			//Implicit promotion from int * to void *
		int		*e = d;				//Implicit demotion
		int		*f = (int *) d;		//Explicit demotion
	}
	//TYPE QUALIFIER REINTERPRETATIONS - there's no bit transformation
	//changing the const or volatile qualifier of a variable
	//in other words, we can remove the const qualifier by casting to regular int ptr
	{
		int			a = 42;

		int const	*b = &a;				//implicit type qualifier cast
		int const	*c = (int const *) &a;	//explicit type qualifier cast

		int const	*d = &a;				//implicit promotion
		int			*e = d;					//implicit demotion ==> compiler will throw a warning
		int			*f = (int *) d;			//explicit demotion

		// *b = 23; //this will throw an error
		*f = 23; //this will work just fine and change the value BUT
		//if a was a const int, then we'd get undefined behavior
	}
}