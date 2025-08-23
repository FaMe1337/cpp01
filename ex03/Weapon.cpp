/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:40:35 by marvin            #+#    #+#             */
/*   Updated: 2025/08/23 16:40:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon) : _type(weapon)
{
    std::cout << "constructor Weapon called\n";
}

Weapon::~Weapon()
{
    std::cout << "destructor Weapon called\n";
}

const std::string& Weapon::getType() const
{
    return (_type);
}

void Weapon::setType(std::string str)
{
    _type = str;
}