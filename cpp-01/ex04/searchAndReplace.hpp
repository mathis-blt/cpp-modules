/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchAndReplace.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:58:31 by maballet          #+#    #+#             */
/*   Updated: 2025/12/09 00:37:18 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_AND_REPLACE_HPP
# define FIND_AND_REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

class searchAndReplace {

	private:

	std::string _filename;
	std::string _search;
	std::string _replace;

	public:

	searchAndReplace(const std::string& filename,
				   const std::string& search,
				   const std::string& replace);
	~searchAndReplace();
	bool run();
	
};

#endif