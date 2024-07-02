/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:09:48 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/02 18:52:17 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include "Easyfind.hpp"

// Constructor
template<typename T>
Easyfind<T>::Easyfind()
{
}

// Destructor
template<typename T>
Easyfind<T>::~Easyfind()
{}

// Copy Constructor
template<typename T>
Easyfind<T>::Easyfind(const Easyfind& copy)
{}

// Copy Assignment Operator
template<typename T>
Easyfind& Easyfind::operator=(const Easyfind& copy)
{}

template<typename T>
typename T::iter easyfind(T& vec, int value)
{
	if (std::find(vec.begin(), vec.end(), value) != vec.end())
		//do something
	else
		//do something else
}

#endif /* EASYFIND_TPP */
