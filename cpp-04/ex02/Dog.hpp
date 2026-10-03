/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:08:52 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 19:54:09 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal {

	private:
	
	Brain* _brain;
	
	public:
	Dog();
	Dog(const Dog&);
	Dog& operator = (const Dog&);
	virtual ~Dog();
	
	virtual void setBrainIdea(std::string idea);
	std::string getBrainIdea() const;
	virtual void makeSound() const;
};

#endif