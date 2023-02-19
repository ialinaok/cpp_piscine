/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   confetti.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:19:15 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/18 19:21:13 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

# define BLACK "\033[0;30m" //0
# define RED "\033[0;31m"   //1
# define GREEN "\033[0;32m" //2
# define YELL "\033[0;33m"  //3
# define BL "\033[0;34m"    //4
# define PU "\033[0;35m"    //5
# define CY "\033[0;36m"    //6
# define WH "\033[0;37m"    //7
# define D "\033[0m"

class	confetti {

	class	piece {

		public:
			std::string	colors[8] = {"\033[0;30m", "\033[0;31m", "\033[0;32m", "\033[0;33m", "\033[0;34m", "\033[0;35m", "\033[0;36m", "\033[0;37m"};

			std::string	choose_color(void);
	};

	public:
		confetti() {}
		~confetti() {}

		void	throw_confetti(int n);
};

void	confetti::throw_confetti(int n) {

	piece	p;

	for (int i = 0; i <= n; i++) {

		std::cout << p.choose_color() << ":" << D;
		if (i % 100 == 0)
			std::cout << std::endl;
	}
}

std::string	confetti::piece::choose_color(void) {

	return (this->colors[rand() % 8]);
}

int	main(void) {

	confetti	confetti;

	confetti.throw_confetti(2000);
}