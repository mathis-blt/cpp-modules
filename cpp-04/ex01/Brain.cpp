/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:17:21 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 16:46:49 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << RED << "Brain default constructor called" << STD << std::endl;
    for (int i = 0; i < 100; ++i)
        ideas[i] = "";
}

Brain::Brain(const Brain& other) {

	std::cout << RED << "Brain copy constructor called" << STD << std::endl;
    for (int i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
}

Brain& Brain::operator = ( const Brain& other) {

	std::cout << RED << "Brain copy assignment constructor called" << STD << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain () {

	std::cout << RED << "Brain destructor called" << STD << std::endl;
}

void Brain::setIdea(std::string idea) {

	ideas[0] = idea;
}

std::string Brain::getIdea() const{

	return ideas[0];
}