/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:37:04 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 22:01:34 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "=== DEBUG ===" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\n=== INFO ===" << std::endl;
	harl.complain("INFO");

	std::cout << "\n=== WARNING ===" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n=== ERROR ===" << std::endl;
	harl.complain("ERROR");

	std::cout << "\n=== PARAMETRE INVALIDE ===" << std::endl;
	harl.complain("WRONG_LEVEL");

	std::cout << "\n=== MINUSCULE ===" << std::endl;
	harl.complain("debug");

	return 0;
}
