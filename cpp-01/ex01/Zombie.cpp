/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:30:34 by maballet          #+#    #+#             */
/*   Updated: 2026/01/08 17:10:15 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {

	std::cout << this->_name << ": has been destroyed" << std::endl; 
}

void	Zombie::announce( void ) const{

	std::cout << this->_name << ": MoreBraiinnnzzzzZ" << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}