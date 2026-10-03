/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:50:50 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 20:18:15 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {

	std::cout << BLUE << "Animal default constructor called" << STD << std::endl;
}

AAnimal::AAnimal( std::string type ): _type(type) {

	std::cout << BLUE << "AAnimal default argument constructor called" << STD << std::endl;
}

AAnimal::AAnimal( const AAnimal& other ): _type(other._type) {

	std::cout << BLUE << "AAnimal copy constructor called" << STD << std::endl;
}

AAnimal& AAnimal::operator = ( const AAnimal& other ) {

	std::cout << BLUE << "AAnimal copy assignment constructor called" << STD << std::endl;
	_type = other._type;
	return *this;
}

std::string AAnimal::getType() const{

	return _type;
}

AAnimal::~AAnimal () {
	
	std::cout << BLUE << "AAnimal destructor called" << STD << std::endl;
}
