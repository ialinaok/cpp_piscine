/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ad_hoc.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:56:11 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 16:49:33 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AD_HOC_H
# define AD_HOC_H

#include <iostream>

class AdHoc {

	public:
		AdHoc(int n);
		~AdHoc();

		void	bar(char const c) const;
		void	bar(int const n) const;
		void	bar(float const z) const;
		void	bar(AdHoc const & l) const;

		int		getN(void);
		int&	getNref(void);
		const int&	getNconstref(void);
		int		const_getN(void) const;
		int&	const_getNref(void) const;
		const int&	const_getNconstref(void) const;
	private:
		int	_n;
};


#endif