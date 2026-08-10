/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:02:33 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/16 10:30:46 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
            ideas[i] = copy.ideas[i];
	}
    return *this;
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string  Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}



