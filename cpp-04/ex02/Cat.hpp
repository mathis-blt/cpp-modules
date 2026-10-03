/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:59:30 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 19:52:33 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal {

	private:
	
	Brain* _brain;
	
	public:
	Cat();
	Cat(const Cat&);
	Cat& operator = (const Cat&);
	virtual ~Cat();

	virtual void setBrainIdea(std::string idea);
	std::string getBrainIdea() const;
	virtual void makeSound() const;
};

#endif