/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_instance.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:13:11 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/08 16:51:01 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_INSTANCE_H
# define CLASS_INSTANCE_H

class	Sample	{
	
	public:
		int	foo;

		Sample(void);
		~Sample(void);

		void	bar(void);
};

#endif