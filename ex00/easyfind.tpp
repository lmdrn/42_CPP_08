/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:09:48 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 13:53:09 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include "Easyfind.hpp"

// Constructor
template<typename T>
Easyfind<T>::Easyfind() : _container(NULL), _size(0)
{
}

// Constructor
template<typename T>
Easyfind<T>::Easyfind(int n) : _container(new T[n]()), _size(n)
{
}

// Destructor
template<typename T>
Easyfind<T>::~Easyfind()
{
	delete _container;
}

// Copy Constructor
template<typename T>
Easyfind<T>::Easyfind(const Easyfind& copy) : _size(copy._size), _container(new T[copy._size])
{
	for (int i = 0; i < _size; i++)
	{
		_container[i] = copy._container[i];
	}
}

// Copy Assignment Operator
template<typename T>
Easyfind<T>& Easyfind<T>::operator=(const Easyfind& copy)
{
	if (this != *copy)
	{
		delete[] _container;
		_size = copy._size;
		_container = new T[copy._size];
		for (int i = 0; i < _size; i++)
		{
			_container[i] = copy._container[i];
		}
	}
	return (*this);
}

template<typename T>
void easyfind(T& container, int value)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter != container.end())
	{
		std::cout << GREEN << "SUCCESS!! \\o/ Found matching value: " << value << " at position " << std::distance(container.begin(), iter) << " !" << RESET << std::endl;
	}
	else
		throw NoValueFoundException();
}

template<typename T>
unsigned int	Easyfind<T>::size() const
{
	return (_size);
}

#endif /* EASYFIND_TPP */
