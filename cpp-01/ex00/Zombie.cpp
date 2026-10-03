/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:04:18 by maballet          #+#    #+#             */
/*   Updated: 2025/12/01 17:09:16 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {}

Zombie::~Zombie() {
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	Zombie::announce( void ) const{

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
