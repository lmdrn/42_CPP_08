/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:09:15 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/02 18:52:36 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Easyfind
{
	private:
	    	// Private members
		T*	container;
		int	nbr;

	public:
    		// Constructor
    		Easyfind();
    		// Destructor
    		~Easyfind();
    		// Copy Constructor
    		Easyfind(const Easyfind& copy);
    		// Copy Assignment Operator
    		Easyfind& operator=(const Easyfind& copy);
		template<typename T>
		typename T::iter	easyfind(T& container, int value);
};

#endif /* EASYFIND_HPP */
