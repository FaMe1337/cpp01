/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:56:01 by fabio             #+#    #+#             */
/*   Updated: 2025/08/17 18:40:56 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie z("No Name");
	z.announce();
	Zombie *test = newZombie("Heappo");
	test->announce();
	delete test;
	randomChump("Stacko");
}
