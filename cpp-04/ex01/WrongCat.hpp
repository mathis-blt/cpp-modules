/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:20:11 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 20:14:31 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private:

	Brain *_brain;
	
	public:
	WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator = (const WrongCat& other);
	virtual ~WrongCat();

	void setBrainIdea(std::string idea);
	std::string getBrainIdea() const;
	virtual void makeSound() const;
};

#endif