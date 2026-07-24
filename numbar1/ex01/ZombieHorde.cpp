/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:42:43 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/24 15:10:13 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name)
{
    if (n <= 0)
        return NULL;
    Zombie *Horde = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        Horde[i].setName(name);
    }
    return Horde;
}
