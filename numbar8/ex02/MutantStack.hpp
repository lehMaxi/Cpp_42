/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:03:41 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/15 12:45:27 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <string>
#include <stack>
#include <list>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const &src);
		~MutantStack();

		MutantStack<T> &	operator=(MutantStack<T> const &src);

		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator			begin();
		iterator			end();
	private:
};

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src) : std::stack<T>(src) {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack<T> const &src)
{
	if(this != &src)
	{
		std::stack<T>::operator=(src);
	}
	return *this;
}

template<typename T>
typename MutantStack<T>::itterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template<typename T>
typename MutantStack<T>::itterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}

#endif
