/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:08:52 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 19:31:08 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	private:
	
	Brain* _brain;
	
	public:
	Dog();
	Dog(const Dog&);
	Dog& operator = (const Dog&);
	virtual ~Dog();
	
	std::string getBrainIdea() const;
	void setBrainIdea(std::string idea);
	virtual void makeSound() const;
};

#endif