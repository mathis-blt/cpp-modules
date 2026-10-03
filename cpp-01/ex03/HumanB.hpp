/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:30:19 by maballet          #+#    #+#             */
/*   Updated: 2025/12/08 19:56:14 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include<iostream>
#include <string>

/*
Here the class Weapon is a pointer because we are gonna modify it later to
initialise it.
BUT the code convention tells us to only use pointer instead of references
when necessary, since naked pointers are undifined until they are initialised.
*/
class HumanB {

	private:

	std::string _name;
	class Weapon *_Weapon;
	
	public:

			HumanB(std::string name);
			~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &Weapon);
};

#endif