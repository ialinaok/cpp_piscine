/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 12:19:21 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/13 16:22:57 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)	{
		for (int i = 1; i < argc; i++)	{
			// printf("%d %s\n", (int) std::char_traits <char>::length(argv[i]), argv[i]);
			// printf("%d %s\n", (int) sizeof(argv[i])/(int) sizeof(argv[i][0]), argv[i]);
			// printf("%d %s\n", argv[1].length(), argv[1]); // ---> this doesnt work, argv is not a string obj
			for (int n = 0; n < (int) std::char_traits <char>::length(argv[i]); n++)	{
				std::cout << (char) std::toupper(argv[i][n]);
			}
		}
		std::cout << std::endl;
	}
	else if (argc == 1)
		std::cout << "* HUNGRY CAT CRYING FOR FOOD, AKA LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}