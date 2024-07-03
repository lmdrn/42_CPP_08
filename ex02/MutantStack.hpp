/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:39:03 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 16:39:15 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>

class MutantStack
{
	private:
	    	// Private members

	public:
    		// Constructor
    		MutantStack();

    		// Destructor
    		~MutantStack();

    		// Copy Constructor
    		MutantStack(const MutantStack& copy);

    		// Copy Assignment Operator
    		MutantStack& operator=(const MutantStack& copy);
};

#endif /* MUTANTSTACK_HPP */
