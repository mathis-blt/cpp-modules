/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:19:41 by maballet          #+#    #+#             */
/*   Updated: 2025/12/04 15:34:33 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int	main() {

	std::string Announce = "HI THIS IS BRAIN";
	std::string *stringPTR = &Announce;
	std::string &stringREF = Announce;

	std::cout << std::endl;
	std::cout << "Announce mem add: " << &Announce << std::endl;
	std::cout << "stringPTR mem add: " << stringPTR << std::endl;
	std::cout << "stringREF mem add: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Announce value: " << Announce << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}
