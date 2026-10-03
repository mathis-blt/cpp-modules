/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:38:34 by maballet          #+#    #+#             */
/*   Updated: 2026/01/08 16:33:02 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string WeaponType) {

	this->_type = WeaponType;
}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const{

	return this->_type;
}

void Weapon::setType(std::string value) {

	this->_type = value;
}
