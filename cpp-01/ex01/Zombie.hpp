/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:22:15 by maballet          #+#    #+#             */
/*   Updated: 2026/01/07 17:23:04 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include<iostream>

class	Zombie {

	private:

	std::string _name;

	public:

	Zombie();
	~Zombie();
	
	void	announce( void ) const;
	void	setName(std::string name);
};

Zombie *zombieHorde( int N, std::string name );

#endif