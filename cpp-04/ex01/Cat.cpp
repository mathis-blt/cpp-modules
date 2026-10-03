/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:13:08 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 19:45:29 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain()) {

	std::cout << GREEN << "Cat default constructor called" << STD << std::endl;
}

Cat::Cat(const Cat& other): Animal(other), _brain(new Brain(*other._brain)) {

	std::cout << GREEN << "Cat copy constructor called" << STD << std::endl;
}

Cat& Cat::operator = (const Cat& other) {

	std::cout << GREEN << "Cat copy assignment constructor called" << STD << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain); // deep copy
	}
	return *this;
}

Cat::~Cat () {
	
	delete _brain;
	std::cout << GREEN << "Cat destructor called" << STD << std::endl;
}

std::string Cat::getBrainIdea() const{

	return (_brain->getIdea());
}

void Cat::setBrainIdea(std::string idea) {

	_brain->setIdea(idea);
}

void Cat::makeSound () const {

	std::cout << GREEN << "MiAouUuUuuuu" << STD << std::endl;
}
