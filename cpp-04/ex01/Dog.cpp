/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:01:24 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 19:45:43 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain()) {

	std::cout << PINK << "Dog default constructor called" << STD << std::endl;
}

Dog::Dog(const Dog& other): Animal(other), _brain(new Brain(*other._brain)) {

	std::cout << PINK << "Dog copy constructor called" << STD << std::endl;
}

Dog& Dog::operator = (const Dog& other) {

	std::cout << PINK << "Dog copy assignment constructor called" << STD << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain); // deep copy
	}
	return *this;
}

Dog::~Dog () {

	delete _brain;
	std::cout << PINK << "Dog destructor called" << STD << std::endl;
}

std::string Dog::getBrainIdea() const{

	return (_brain->getIdea());
}

void Dog::setBrainIdea(std::string idea) {

	_brain->setIdea(idea);
}

void Dog::makeSound () const{

	std::cout << PINK << "waf waf ! ˚ ⋅૮₍ › ˕ ‹ ₎ა ⋅˚⋅" << STD << std::endl;
}