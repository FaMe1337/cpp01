/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:40:33 by marvin            #+#    #+#             */
/*   Updated: 2025/08/23 16:40:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "constructor HumanB called\n";
}

HumanB::~HumanB()
{
	std::cout << "destructor HumanB called\n";
}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
	else
		std::cout << _name  << " tried to attack but has no weapon.\n";

}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}