/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catsnponies.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:48:18 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/12 16:57:56 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATS_N_PONIES_H
# define CATS_N_PONIES_H

#include <string>

class	Animal {

	private:
		int	_numberOfLegs;

	public:
		Animal();
		Animal(Animal const&);
		Animal&	operator=(Animal const&);
		~Animal();

		void	run(int distance);
		void	call();
		void	eat(std::string const & what);
		void	walk(int distance);
};

class	Cat : public Animal {

	public:
		Cat();
		Cat(Cat const&);
		Cat&	operator=(Cat const&);
		~Cat();

		void	scornSomeone(std::string const& target);
};

class	Pony : public Animal {

	public:
		Pony();
		Pony(Pony const&);
		Pony&	operator=(Pony const&);
		~Pony();

		void	doMagic(std::string const& target);
};

//* this way is tedious and not cool, the cool way of doing things is using inheritance *//

// class	Cat {

// 	private:
// 		int	_numberOfLegs;

// 	public:
// 		Cat();
// 		Cat(Cat const&);
// 		Cat&	operator=(Cat const&);
// 		~Cat();

// 		void	run(int distance);
// 		void	scornSomeone(std::string const& target);
// };

// class	Pony {

// 	private:
// 		int	_numberOfLegs;

// 	public:
// 		Pony();
// 		Pony(Pony const&);
// 		Pony&	operator=(Pony const&);
// 		~Pony();

// 		void	run(int distance);
// 		void	doMagic(std::string const& target);
// };

#endif