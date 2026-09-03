/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 12:59:30 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 13:48:56 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _array(new T[0]), _size(0) 
{}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[n] = 0;
	this->_size = n;
}

template<typename T>
Array<T>::Array(Array const &src)
{
	*this = src;
}

template<typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}

template<typename T>
Array<T> &	Array<T>:: operator=(Array<T> const &source)
