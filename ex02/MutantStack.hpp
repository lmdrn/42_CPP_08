/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:39:03 by lmedrano          #+#    #+#             */
/*   Updated: 2024/08/12 11:21:46 by lmedrano         ###   ########.fr       */
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
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
		iterator		begin(void);
		iterator		end(void);
		const_iterator		begin(void) const;
		const_iterator		end(void) const;
		reverse_iterator	rbegin(void);
		reverse_iterator	rend(void);
		const_reverse_iterator	rbegin(void) const;
		const_reverse_iterator	rend(void) const;
};

#include "MutantStack.tpp"

#endif /* MUTANTSTACK_HPP */
