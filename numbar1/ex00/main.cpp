/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:35:03 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/24 14:36:38 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
    Zombie *onHeap = newZombie(std::string("Igor"));

    onHeap->announce();
    randomChump(std::string("Ralf"));
    delete onHeap;
    return 0;
}
