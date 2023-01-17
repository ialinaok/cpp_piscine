/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:56:55 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/17 18:39:30 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

struct	Vertex {

	float	x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) {

	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int	main(void) {

		// *** in both of these cases, we're tied to the size of 5 ***//
	// Vertex	vertices[5]; // this is static array, allocated on stack
	// Vertex	*vertices = new Vertex[5]; // this is static allocated on heap

	std::vector<Vertex>	vertices;

	vertices.push_back({1, 2, 3});
	vertices.push_back({4, 5, 6});
	for (int i = 0; i < vertices.size(); i++)
		std::cout << vertices[i] << std::endl;

	// *** or another syntax *** //
	for (Vertex& v : vertices) // if there's no & symbol, it's all going to copy
		std::cout << v << std::endl;

	vertices.erase(vertices.begin() + 1); // erases second element
	for (Vertex& v : vertices) // if there's no & symbol, it's all going to copy
		std::cout << v << std::endl;

	std::cin.get();
}