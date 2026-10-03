/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:18:51 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 22:07:18 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

	this->functionPtr[0] = &Harl::debug;
	this->functionPtr[1] = &Harl::info;
	this->functionPtr[2] = &Harl::warning;
	this->functionPtr[3] = &Harl::error;
}

Harl::~Harl( void ) {}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::execute(int i) {

	for (int j = i; j < 4; j++)
		(this->*functionPtr[j])();
}	

int		findIndex(std::string level) {

	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while(levels[i] != level) 
		i++;
	return i;
}

void	Harl::complain(std::string level) {
	
	switch (findIndex(level)) {
	case 0:
		this->execute(0);
		break;
	case 1:
		this->execute(1);
		break;
	case 2:
		this->execute(2);
		break;
	case 3:
		this->execute(3);
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
