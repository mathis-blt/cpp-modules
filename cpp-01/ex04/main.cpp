/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:58:10 by maballet          #+#    #+#             */
/*   Updated: 2025/12/10 10:59:44 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "searchAndReplace.hpp"

bool	argCheck(std::string filename, std::string s1) {

	if (s1.empty())
	{
		std::cout << "Error: s1 cannot be empty" << std::endl;
		return EXIT_FAILURE;
	}
	if (filename.empty())
	{
		std::cout << "Error: filename cannot be empty" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

int main(int argc, char **argv) {

	if (argc != 4)
	{
		std::cout << "Error: Exactly 3 arguments expected in this order: <filename> <s1> <s2>" << std::endl;
		return EXIT_FAILURE;
	}

	if (argCheck(argv[1], argv[2]) == EXIT_FAILURE)
		return EXIT_FAILURE;

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	searchAndReplace tool(filename, s1, s2);

	if (tool.run())
		return EXIT_FAILURE;
	return EXIT_SUCCESS;
}
