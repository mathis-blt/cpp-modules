/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:40:23 by maballet          #+#    #+#             */
/*   Updated: 2025/12/01 17:25:43 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie {
	
	private:

	std::string	_name;

	public:

	Zombie( std::string name );
	~Zombie();

	void	announce( void ) const;
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif
