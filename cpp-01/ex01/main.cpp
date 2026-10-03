/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:00:04 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 21:38:13 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	int N = 5;
	Zombie *result = zombieHorde(N, "Caciopée");
	for (int i = 0; i < N; i++) {
		
		result[i].announce();
	}
	delete[] result;
	return (0);
}
