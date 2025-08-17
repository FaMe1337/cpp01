/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:53:08 by fabio             #+#    #+#             */
/*   Updated: 2025/08/17 19:27:11 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "we need for a horde!!\n";
		return nullptr;
	}
	Zombie *horde = new Zombie[N];
	if (!horde)
	{
		std::cerr << "Mem allocation Failed!" << std::endl;
		exit (1);
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}
