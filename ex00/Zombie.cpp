/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:56:06 by fabio             #+#    #+#             */
/*   Updated: 2025/08/17 18:36:35 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string newZombie) : _name(newZombie)
{
	return;
}

Zombie::~Zombie()
{
	std::cout << _name << " got headshotted" << std::endl;
	return;
}

void Zombie::announce(void)
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
