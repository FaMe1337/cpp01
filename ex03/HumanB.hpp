/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:40:30 by marvin            #+#    #+#             */
/*   Updated: 2025/08/23 16:40:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:

		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& weapon);

	private:

		std::string _name;
		Weapon *_weapon;
};

#endif