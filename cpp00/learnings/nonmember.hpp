/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nonmember.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:27:19 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 16:32:11 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NONMEMBER_H
# define NONMEMBER_H

class Nonmember {

	public:
		Nonmember(void);
		~Nonmember(void);
		
		static int	getNbInst(void);

	private:
		static int	_nbInst;
};

#endif