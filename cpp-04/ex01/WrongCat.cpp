/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:20:08 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 20:22:00 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"), _brain(new Brain()) {

	std::cout << GREEN << "WrongCat default constructor called" << STD << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other), _brain(other._brain) {

	std::cout << GREEN << "WrongCat copy constructor called" << STD << std::endl;
	_type = other._type;
	_brain = other._brain; // shallow copy
	*this = other;
}

WrongCat& WrongCat::operator = (const WrongCat& other) {

	std::cout << GREEN << "WrongCat copy assignment constructor called" << STD << std::endl;
	if (this != &other) {
		_type = other._type;
		_brain = other._brain; // shallow copy
	}
	return *this;
}

WrongCat::~WrongCat () {

	std::cout << GREEN << "WrongCat destructor called" << STD << std::endl;
}

std::string WrongCat::getBrainIdea() const{

	return (_brain->getIdea());
}

void WrongCat::setBrainIdea(std::string idea) {

	// delete _brain;
	_brain->setIdea(idea);
}

void WrongCat::makeSound () const {

	std::cout << GREEN << "MiAouUuUuuuu" << STD << std::endl;
}
