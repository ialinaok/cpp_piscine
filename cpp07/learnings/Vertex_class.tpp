/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex_class.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:45:11 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/20 19:07:13 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template< typename T = float >	//if type will not be explicitly given, it will get instantiated with floats
class	Vertex {

	public:
		Vertex(T const & x, T const & y, T const & z) : _x(x), _y(y), _z(z) {}
		~Vertex(void) {}

		T const &	getx(void) const { return this->_x; }
		T const &	gety(void) const { return this->_y; }
		T const &	getz(void) const { return this->_z; }

		//(...)

	private:
		T const _x;
		T const _y;
		T const _z;

		Vertex(void); //default constructor is private, so it's not possible to construct a Vertex class without passing any parameters
};

template <typename T>
std::ostream & operator<<(std::ostream & o, Vertex < T > const & v) {

	std::cout.precision(1);
	o << std::setiosflags(std::ios::fixed);
	o << "Vertex( ";
	o << v.getx() << ", ";
	o << v.gety() << ", ";
	o << v.getz() << ")";

	return o; 
}