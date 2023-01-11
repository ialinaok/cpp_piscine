/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:49:23 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 16:12:12 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPARISONS_H
# define COMPARISONS_H

class Comparisons {

	public:
		Comparisons(int n);
		~Comparisons(void);

		int	getFoo(void) const;
		int	compare(Comparisons * other) const;

	private:
		int	_foo;
};

#endif