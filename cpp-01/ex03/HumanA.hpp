/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:02:37 by maballet          #+#    #+#             */
/*   Updated: 2025/12/08 20:00:10 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include<iostream>
#include <string>

/*
This class will initialise itself with a Weapon class and we will keep this
class until the end of the program. So to be secure, this value will be a
reference since a reference cannot be re-assigned in C++.
*/
class HumanA {

	private:

	std::string _name;
	class Weapon &_Weapon;
	
	public:

			HumanA(std::string name, class Weapon &Weapon);
			~HumanA();
	void	attack() const;
	
};

#endif