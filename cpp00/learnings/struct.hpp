/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:49:44 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/10 17:58:58 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

//declaration is the same apparently, only the keyword is different
//everything you do with a struct in C you can do with classes in C++
//but it allows you to have more control over the attributes
//scope of a struct in C++ is public by default, and of a class - is private by defualt
struct	Sample1 {

	int	foo;

	Sample1(void);
	~Sample1(void);

	void	bar(void) const;
};

class Sample2 {

	int	foo;

	Sample2(void);
	~Sample2(void);

	void	bar(void) const;
};

#endif