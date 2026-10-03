/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:59:30 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 19:31:02 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

	private:
	
	Brain* _brain;
	
	public:
	Cat();
	Cat(const Cat&);
	Cat& operator = (const Cat&);
	virtual ~Cat();

	std::string getBrainIdea() const;
	void setBrainIdea(std::string idea);
	virtual void makeSound() const;
};

#endif