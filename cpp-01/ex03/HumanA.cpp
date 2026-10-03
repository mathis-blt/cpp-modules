/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:13:04 by maballet          #+#    #+#             */
/*   Updated: 2025/12/04 17:29:04 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon): _name(name), _Weapon(Weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {

	std::cout << this->_name << " attacks with their "
			  << this->_Weapon.getType() << std::endl;
}
