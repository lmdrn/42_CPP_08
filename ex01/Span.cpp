/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:57:02 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 14:55:08 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructor
Span::Span() : _size(0)
{
}

// Constructor
Span::Span(unsigned int N) : _size(N) 
{
}

// Destructor
Span::~Span()
{
}

// Copy Constructor
Span::Span(const Span& copy) : _size(copy._size) 
{
}

// Copy Assignment Operator
Span& Span::operator=(const Span& copy)
{
	if (this != &copy)
	{
		_size = copy._size;
	}
	return (*this);
}

//Member fucntions
void		Span::addNumber(int toAdd)
{
	if (_tablo.size() < _size)
	{
		_tablo.push_back(toAdd);
		std::cout << GREEN << "SUCESS! Added: " << toAdd << " to array :)" << RESET << std::endl;
	}
	else
		throw AboveArrayException();
}

unsigned int	Span::shortestSpan()
{
	return (0);
}

unsigned int	Span::longestSpan()
{
	return (0);
}
