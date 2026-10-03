/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:30:01 by maballet          #+#    #+#             */
/*   Updated: 2026/01/15 18:19:15 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

/*
_Weapon is initialised to NULL to avoid pointing on a random adress.
*/
HumanB::HumanB(std::string name): _name(name), _Weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() const {

	if (!this->_Weapon)
		return;
	std::cout << this->_name << " attacks with their "
			  << this->_Weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon) {

	this->_Weapon = &Weapon;
}
