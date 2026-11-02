/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:14:26 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 14:14:53 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> & input, int size) : _vector(input), _deque(input.begin(), input.end()), _size(size)
{
	this->_vecsort();
	this->_deqsort();
}

PmergeMe::PmergeMe(PmergeMe const &src) : _size(src._size)
{
	this->_vector = src._vector;
	this->_deque = src._deque;
	*this = src;
}

PmergeMe::~PmergeMe()
{}

PmergeMe &	PmergeMe::operator=(PmergeMe const &rSym)
{
	if (this != &rSym)
	{
		this->_vector = rSym._vector;
		this->_deque = rSym._deque;
	}
	return *this;
}

void	PmergeMe::_vecSort()
{
	clock_t start = clock();

	size_t const				half = thi->_vector.size() / 2;
	std::vector<int>			split_lo(this->_vector.begin(), this->_vector.begin() + half);
	std::vector<int>			split_hi(this->_vector.begin() + half, this->_vector.end());
	std::vector<int>::iterator	i;
	std::vector<int>::iterator	finish;

	std::sort(split_lo.begin(), split_lo.end());
	std::sort(split_hi.begin(), split_hi.end());

	split_lo.insert(split_lo.end(), split_hi.begin(), split_hi.end());

	std::sort(split_lo.begin(), split_lo.end());

	std::cout << "Result: ";
	for (i = split_lo.begin(), finish = split_lo.end(); i != finish; i++)
		std::cout << " " << *i;
	std::cout << std::endl;

	clock_t	end = clock();
	double duration = (double)(end - start) / CLOCS_PER_SEC * 1000000;
	std::cout << "Time needed to sort " << this->_size << " elements with std::vector<int> : " << duration << " us" << std::endl;
}














