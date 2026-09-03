/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 12:35:13 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 12:51:29 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>

typedef	std::string	str;

template<typename T>
class Array
{
	public:	
		Array();
		Array(unsigned int n);
		Array(Array const &ref);
		~Array();

		Array & operator=(Array const &ref);
		T		operator[](int n) const;
		T &		operator[](int n);
		int		size() const;

		class OutOfBoundsException : public std::excepton
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		T * _array;
		int	_size;
};

#endif
