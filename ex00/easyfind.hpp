/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:09:15 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 13:27:57 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"


template<typename T>
class Easyfind
{
	private:
	    	// Private members
		T*	_container;
		int	_size;

	public:
    		// Constructor
    		Easyfind();
		Easyfind(int n);
    		// Destructor
    		~Easyfind();
    		// Copy Constructor
    		Easyfind(const Easyfind& copy);
    		// Copy Assignment Operator
    		Easyfind& operator=(const Easyfind& copy);
		void		easyfind(T& container, int value);
		unsigned int	size() const;
};

class NoValueFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("No matching value found !");
		}
};

#include "Easyfind.tpp"

#endif /* EASYFIND_HPP */
