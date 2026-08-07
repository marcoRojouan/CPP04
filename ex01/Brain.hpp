/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:10:11 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/16 10:25:40 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private :
		std::string ideas[100];
	
	public :
		Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& copy);
		~Brain();
		
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;

};

#endif