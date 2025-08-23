/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:40:21 by marvin            #+#    #+#             */
/*   Updated: 2025/08/23 16:40:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "constructor HumanA called\n";
}

HumanA::~HumanA()
{
    std::cout << "destructor HumanA called\n";
}

void HumanA::attack()
{
    std::cout << _name << "  attacks with their " << _weapon.getType() << "\n";
}