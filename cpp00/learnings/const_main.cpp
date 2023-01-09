/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_main.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:34:58 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/09 18:35:54 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "const.hpp"

int	main(void) {

	Const	instance(3.14f);

	instance.bar();

	return (0);
}