/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:19:32 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/09 18:34:39 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONST_H
# define	CONST_H

class	Const {

	public:
		float const	pi; //const attribute
		int			qd;

		Const(float const f); //constructor will accept const float, so that we can initialize pi
		~Const(void);

		void	bar(void) const; //const keyword means here that this member function
		//won't alter the instance. put it anytime you realize something shouldn't be changed in your class.
};

#endif