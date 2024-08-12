/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:27:58 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/09 15:43:12 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

// Constructor
template<typename T>
MutantStack<T>::MutantStack()
{}

// Destructor
template<typename T>
MutantStack<T>::~MutantStack()
{}

// Copy Constructor
template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy)
{
	*this = std::stack<T>(copy);
}

// Copy Assignment Operator
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& copy)
{
	std::cout << PURPLE << "It's a copy!" << RESET << std::endl;
	if (this != &copy)
	{
		std::stack<T>::operator=(copy);
	}
	return (*this);
}

template<typename T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template<typename T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

template<typename T>
typename std::deque<T>::const_iterator MutantStack<T>::begin() const
{
	return (std::stack<T>::c.begin());
}

template<typename T>
typename std::deque<T>::const_iterator MutantStack<T>::end() const
{
	return (std::stack<T>::c.end());
}

#endif /* MUTANTSTACK_TPP */
