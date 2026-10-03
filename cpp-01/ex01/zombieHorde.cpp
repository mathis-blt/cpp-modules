/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:02:01 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 21:37:57 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde( int N, std::string name ) {

	Zombie* Horde = new Zombie[N];
	
	for (int i = 0; i < N; i++) {

		std::stringstream zombieIndex;
		zombieIndex << i + 1;
		Horde[i].setName(name + " " + zombieIndex.str());
	}
	return Horde;
}
