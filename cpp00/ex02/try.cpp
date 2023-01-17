/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:11:02 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/17 17:18:57 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

int main(void) {

	time_t	now = time(0);

	tm	*ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year;
	if (1 + ltm->tm_mon <=9)
		std::cout << "0" << 1 + ltm->tm_mon;
	else
		std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday <= 9)
		std::cout << "0" << ltm->tm_mday;
	else
		std::cout << ltm->tm_mday << "_";
	if (ltm->tm_hour <= 9)
		std::cout << "0" << ltm->tm_hour;
	else
		std::cout << ltm->tm_hour;
	if (ltm->tm_min <= 9)
		std::cout << "0" << ltm->tm_min;
	else
		std::cout << ltm->tm_min;
	if (ltm->tm_sec <= 9)
		std::cout << "0" << ltm->tm_sec;
	else
		std::cout << ltm->tm_sec;
	std::cout << "]" << std::endl;

	return (0);
}