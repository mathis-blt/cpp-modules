/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:38:36 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 21:31:01 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Here i have two function creating a Zombie object.
// Since i collect one of them created on the heap (tas) with the newZombie function,
// i delete it to avoid any leak. The other Zombie object will be deleted at 
// the end of the program since it has been created on the stack (pile).

int	main(void) {
	
	Zombie* John = newZombie("John");
	randomChump("Billy");
	delete John;

	return 0;
}
