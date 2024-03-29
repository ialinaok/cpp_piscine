/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accessors.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:16:10 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 14:29:43 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCESSORS_H
# define ACCESSORS_H

//getters - to avoid mess - reading and writing proxy functions
//allowed to change the value of _foo. 
//we don't want user to be able to access it, but we might want the user to have
//certain allowance to manipulate the attribute. 
class	Accessors {

	public:
		Accessors(void);
		~Accessors(void);
		
		int	getFoo(void) const;
		int	setFoo(int v);

	private:
		int	_foo;
};

#endif