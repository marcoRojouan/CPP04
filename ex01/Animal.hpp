/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:54:34 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/16 10:08:45 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected : 
		std::string type;	

	public :
		Animal(void);
		Animal(const Animal& other);
    	Animal& operator=(const Animal& other);
		virtual ~Animal(void);
		
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
