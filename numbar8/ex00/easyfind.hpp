/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:53:00 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/15 13:27:50 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stdexcept>

class NoValueException : public std::exception
{
	public:
		virtual const char *  what() const throw();
};

template<typename T>
int	easyfind(T array, int val)
{
	typename T::iterator elem = std::find(array.begin(), array.end(), val);
	if (elem == array.end())
		return -1;
	return *elem;
}

#endif
