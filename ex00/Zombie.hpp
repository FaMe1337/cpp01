/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabio <fabio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:56:10 by fabio             #+#    #+#             */
/*   Updated: 2025/08/17 18:35:22 by fabio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie(std::string newZombie);
		~Zombie();
		void announce(void);

	private:
		std::string _name;
};

Zombie* newZombie( std::string name);
void 	randomChump( std::string name );

#endif
