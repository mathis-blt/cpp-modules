/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:37:04 by maballet          #+#    #+#             */
/*   Updated: 2025/12/10 14:53:43 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {

	if (argc != 2 || !argv[1]) {
		std::cout << "Invalid parameters, please enter: <program> <level>" << std::endl;
		return(0);
	}
	class Harl costumer;
	std::string level;
	level = argv[1];
	costumer.complain(level);
	return (0);
}
