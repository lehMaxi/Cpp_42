/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:53:00 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 13:53:06 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <string>
#include <algorythm>
#include <list>
#include <stdexcept>

typedef std::string str;

class NoValueException : public std::exception
{
	public:
		virtual const char *  what() const throw();
};

template<typename T>
int	easyfind(T const & array, int val);

#endif
