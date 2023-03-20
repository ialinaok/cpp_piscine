/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template_list.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:26:49 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/20 18:36:14 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
class	List {

	public:
		List<T>(T const & content) {}		//constructor instead of the function
		List<T>(List<T> const & list) {}	
		~List<T>(void) {}

	private:
		T			*_content;				//T will become exactly what we need
		List<T>		_next;
};

int	main(void) {

	List<int>		a(42);
	List<float>		b(3.24f);
	List<List<int>>	c(a);					//2D List

	//(...)

	return 0;
}