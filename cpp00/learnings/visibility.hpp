/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:45:03 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/10 16:27:48 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	VISIBILITY_H
# define	VISIBILITY_H

//some attributes are only possible to access from inside the class, and some
//from both inside and outside of the class. try to guess which are which.
//private - user has no access.
class	Visibility {

	public:
		int	publicFoo;

		Visibility(void);
		~Visibility(void);

		void	publicBar(void) const;
	
	private:
		int		_privateFoo;
		void	_privateBar(void) const;
		//underscore is handy to know whether the member is private or public
};

#endif