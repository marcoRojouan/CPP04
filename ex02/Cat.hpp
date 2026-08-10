/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:01:38 by mrojouan          #+#    #+#             */
/*   Updated: 2026/08/06 10:33:21 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{	 
	private:
    	Brain* brain;

	public :
		Cat(void);
		Cat(const Cat& other);
    	Cat& operator=(const Cat& other);
		~Cat(void);
		
		void makeSound(void) const;

		Brain* getBrain();
		const Brain* getBrain() const;
};

#endif