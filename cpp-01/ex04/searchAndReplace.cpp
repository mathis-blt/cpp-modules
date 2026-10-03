/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchAndReplace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:53:16 by maballet          #+#    #+#             */
/*   Updated: 2025/12/10 11:08:44 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "searchAndReplace.hpp"

searchAndReplace::searchAndReplace(const std::string& filename,
				   			   const std::string& search,
				   			   const std::string& replace):
							   _filename(filename),
							   _search(search),
							   _replace(replace) {} 

searchAndReplace::~searchAndReplace() {}

bool searchAndReplace::run() {

	std::ifstream input(_filename.c_str());
	if (!input.is_open())
	{
		std::cout << "Error: error while opening the file" << std::endl;
		return EXIT_FAILURE;
	}
	std::string outputName = _filename + ".replace";
	std::ofstream output(outputName.c_str());
	std::string line;
	while (getline(input, line)) {

		size_t OccurrencePos = line.find(this->_search);
		while (OccurrencePos != (size_t)-1) {
			
			line.erase(OccurrencePos, this->_search.length());
			line.insert(OccurrencePos, this->_replace);
			OccurrencePos = line.find(this->_search, (OccurrencePos + this->_replace.length()));
		}
		output << line;
		if (input.eof())
			output << std::endl;
	}
	return EXIT_SUCCESS;
}
