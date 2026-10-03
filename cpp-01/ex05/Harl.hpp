/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:18:41 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 22:00:25 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
	
	private:
	
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
    void	(Harl::*functionPtr[4])(void);
	
	public:

	Harl();
	~Harl();
	void	complain( std::string level );
	
};

#endif