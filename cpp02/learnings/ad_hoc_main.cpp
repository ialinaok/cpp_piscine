/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ad_hoc_main.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:54:01 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 16:58:57 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ad_hoc.hpp"

int	main() {

	AdHoc	adhoc(23);
	char	a = 'a';
	int		i = 42;
	float	f = 23.23;

	adhoc.bar(a);
	adhoc.bar((int)a);
	adhoc.bar(i);
	adhoc.bar(f);
	adhoc.bar(adhoc);

	std::cout << "-----getN:-----" << std::endl;
	int		n = adhoc.getN();
	n = 42;
	std::cout << "this is _n: " << adhoc.getN() << std::endl;
	std::cout << "-----getNref:-----" << std::endl;
	int&	nref = adhoc.getNref();
	nref = 42;
	std::cout << "this is _n: " << adhoc.getN() << std::endl;
	std::cout << "-----getNconstref:-----" << std::endl;
	const int&	nconstref = adhoc.getNconstref();
	// nconstref = 420;
	std::cout << "this is _n: " << adhoc.getN() << std::endl;
	std::cout << "-----const_getN:-----" << std::endl;
	n = 63;
	std::cout << "this is _n: " << adhoc.getN() << std::endl;
}