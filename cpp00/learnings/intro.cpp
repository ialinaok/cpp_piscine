/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:03:25 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/08 15:32:06 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;
int	f(void) {return 2;}

namespace Foo {
	int		gl_var = 3;
	int		f(void) {return 4;}
}

namespace Bar {
	int		gl_var = 5;
	int		f(void) {return 6;}
}

namespace Huf = Bar;

int	main(void) {

	printf("gl_var:		[%d]\n", gl_var);
	printf("f()		[%d]\n\n", f());

	printf("gl_var:		[%d]\n", Foo::gl_var);
	printf("f()		[%d]\n\n", Foo::f());

	printf("gl_var:		[%d]\n", Bar::gl_var);
	printf("f()		[%d]\n\n", Bar::f());

	printf("gl_var:		[%d]\n", Huf::gl_var);
	printf("f()		[%d]\n\n", Huf::f());

	printf("gl_var:		[%d]\n", ::gl_var);
	printf("f()		[%d]\n\n", ::f());

	return (0);
}