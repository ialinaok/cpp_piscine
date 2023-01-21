/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:08:31 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/21 20:13:27 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main() {

	std::ifstream	ifs("numbers"); //calling ifs and passing numbers, what will happen:
	//input stream will be created, a file will be connected to it, so I will have a stream 
	//from which I can read the 'numbers' file
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	//-----------------------------

	std::ofstream	ofs("test.out");

	ofs << "we're the universe experiencing itself in human form" << std::endl;
	ofs.close();
}