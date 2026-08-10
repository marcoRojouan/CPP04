/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:01:51 by mrojouan          #+#    #+#             */
/*   Updated: 2026/08/06 10:33:09 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{	
	private:
    	Brain* brain;

	public :
		Dog(void);
		Dog(const Dog& other);
    	Dog& operator=(const Dog& other);
		~Dog(void);

		void makeSound(void) const;

		Brain* getBrain();
		const Brain* getBrain() const;
};

#endif