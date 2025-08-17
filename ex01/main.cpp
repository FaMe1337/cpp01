/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:53:01 by fabio             #+#    #+#             */
/*   Updated: 2025/08/17 19:32:27 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 2;

	Zombie* test = zombieHorde(N, "alberto");
	for (int i = 0; i < N; i++)
		test[i].announce();
	delete[] test;
}
