/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:54:44 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 14:02:20 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxSize(0), _size(0) {}

Span::Span(unsigned int N) : _maxSize(N), _size(0) {}

Span::Span(Span const &src)
{
	_array = src._array;
	_maxSize = src._maxSize;
	_size = src._size;
}

Span::~Span()
{
}

Span &	Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_array = src._array;
		_maxSize = src._maxSize;
		_size = src._size;
	}
	return *this;
}

void	Span::addNumber(int n)
{
	if (_size == _maxSize)
		trow Span::MaxNumbersException();
	_array.push_back(n);
	_size++;
}

void	Span::addMany(int n)
{
	int number = 0;
	
	if (_size + n > _maxSize)
	{
		std::cout << "Impossible to add " << n << " the maximum size can not contain that much." << std::endl;
		return;
	}
	for (int i = 0; i < n; i++)
		{
			number = rand() % 100 + 1;
			this.addNumber(number);
		}
	_size += n;
}
