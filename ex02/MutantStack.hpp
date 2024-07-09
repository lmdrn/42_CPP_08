/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:39:03 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/09 14:26:36 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"



template<typename T>
class MutantStack : public std::stack<T>
{
	private:
	    	// Private members

	public:
    		// Constructor
    		MutantStack();

    		// Destructor
    		~MutantStack();

    		// Copy Constructor
    		MutantStack(const MutantStack<T>& copy);

    		// Copy Assignment Operator
    		MutantStack& operator=(const MutantStack<T>& copy);

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		iterator	begin(void);
		iterator	end(void);
		const_iterator	begin(void) const;
		const_iterator	end(void) const;
};

#include "MutantStack.tpp"

#endif /* MUTANTSTACK_HPP */
