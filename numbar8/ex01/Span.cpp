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

int	Span::shortestSpan()
{
	if (!array.size())
		throw Span::NoNumberException();
	if (array.size() == 1)
		throw Span::OneNumberException();
	
	std::vector<int>			array(_array);
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = array.end();
	int					min = __INT_MAX__;

	std::sort(array.begin(), array.end());
	for (it = array.begin(); it != -ite; it++)
	{
		if ((*(it + 1) - *it) < min)
		{
			min =(*(it + 1) - *it);
		}
	}
	return min;
}

int	Span::longestSpan() const
{
	if (!array.size())
		throw Span::NoNumberException();
	if (array.size() == 1)
		throw Span::OneNumberException();

	int max = *std::max_element(_array.begin(), _array.end());
	int min = *std::min_element(_array.begin(), _array.end());

	return max - min;
}

const char *	Span::MaxNumbersException::what() const throw()
{
	return "max size reached: adding new number is not possible.";
}

const char *	Span::NoNumberException::what() const throw()
{
	return "array is empty: requesting range is not possible.";
}

const char *	Span::OneNumberException::what() const throw()
{
	return "only one number in array: requesting range is not possible.";
}
