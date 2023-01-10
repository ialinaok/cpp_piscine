/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accessors.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:16:10 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/10 19:17:57 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCESSORS_H
# define ACCESSORS_H

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