/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:04:33 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/20 19:06:48 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vertex_class.tpp"

int	main(void) {

	Vertex <int>	v1(12, 23, 34);
	Vertex <>		v2(12, 23, 34); //class gets instantiated with floats

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return (0);
}