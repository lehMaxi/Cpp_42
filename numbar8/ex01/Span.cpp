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

