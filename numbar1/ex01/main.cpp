/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:41:49 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/24 14:43:23 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name);

int main()
{
    int n = 10;
    Zombie *horde = zombieHorde(n, std::string("creepy_crawly"));
    if (horde == NULL)
        return(1);
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}
