/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:38:13 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/09 18:09:00 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INIT_H
# define	INIT_H

//'a' for attributes, 'p' for parameters
class	Init1 {

	public:
		char	a1;
		int		a2;
		float	a3;

		Init1(char p1, int p2, float p3);
		~Init1(void);
};

class	Init2 {

	public:
		char	a1;
		int		a2;
		float	a3;

		Init2(char p1, int p2, float p3);
		~Init2(void);
};

#endif