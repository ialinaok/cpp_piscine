/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 23:19:08 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/24 13:10:41 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class	IOperation;

int	main() {

	std::list<int>		lst1;

	lst1.push_back(2);
	lst1.push_back(23);
	lst1.push_back(42);

	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = lst1.end();

	for (it = lst1.begin(); it != ite; ++it)
		std::cout << *it << std::endl;

	std::map<std::string, IOperation*>	map1;

	map1["opA"] = new OperationA;
	map1["opB"] = new OperationB;

	return (0);
}