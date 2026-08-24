/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templater.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 14:54:24 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 14:54:26 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

typedef std::string str;

template<typename T>
void  iter(T *adress, int length, void (*function)(T& var));

template<typename T>
void  printValue(T val);

#endif
