/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:39:00 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/22 11:32:48 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class	Array {

	public:
		Array() : _size(0), _arr(NULL) {}
		Array(unsigned int n) : _size(n), _arr(new T[n]) {}
		Array(Array const & src) {
			if (src.size() != 0) {
				this->_size = src.size();
				this->_arr = new T[this->_size];
			}
			for (int i = 0; i < this->_size; i++)
				this->_arr[i] = src._arr[i];
		}
		~Array() {
			if (this->_size != 0)
				delete[] this->_arr;
		}

		Array &	operator=(Array rhs) {
			swap(*this, rhs);
			return (*this);
		}

		T &	operator[](int i) {
			if (i >= this->_size || i < 0)
				throw std::out_of_range("Index out of range");
			return (this->_arr[i]);
		}

		int	size(void) const {return (this->_size);}
		void	swap(Array & first, Array & second) {
			std::swap(first._size, second._size);
			std::swap(first._arr, second._arr);
		}

	private:
		int		_size;
		T		*_arr;
};

// *** COLORS ***//
# define BLANK "\e[0m"
# define BLA "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define BLU "\033[0;34m"
# define PU "\033[0;35m"
# define CY "\033[0;36m"
# define WH "\033[0;37m"
# define D "\033[0m"

#endif