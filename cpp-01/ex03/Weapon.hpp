/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:26:36 by maballet          #+#    #+#             */
/*   Updated: 2026/01/08 16:32:52 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include<string>

class	Weapon{

	private:
	
	std::string _type;
	
	public:

	Weapon(std::string WeaponType);
	~Weapon();
	
	const std::string &getType() const;
	void setType(std::string value);
	
};

#endif