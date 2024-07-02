/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:09:15 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/02 18:09:40 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

class easyfind
{
	private:
	    	// Private members

	public:
    		// Constructor
    		easyfind();

    		// Destructor
    		~easyfind();

    		// Copy Constructor
    		easyfind(const easyfind& copy);

    		// Copy Assignment Operator
    		easyfind& operator=(const easyfind& copy);
};

#endif /* EASYFIND_HPP */
