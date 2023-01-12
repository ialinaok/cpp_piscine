/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:04:30 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/12 15:48:18 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINTERS_H
# define POINTERS_H

class	Pointers {

	public:
		int	foo;
		int	test;

		Pointers(void);
		~Pointers(void);

		void	bar(void) const;
};

#endif