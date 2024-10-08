/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:57:02 by lmedrano          #+#    #+#             */
/*   Updated: 2024/08/12 11:13:38 by lmedrano         ###   ########.fr       */
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

//Shortest Span: The smallest difference between any 
//two consecutive numbers in a sorted sequence.
int	Span::shortestSpan()
{
	if (_tablo.size() <= 1)
		throw ArrayTooSmallException();
	//sort the container !
	//WHY ?
	//the smallest difference bteween two nbrs will be between
	//two consecutives elements in a sorted sequence
	std::sort(_tablo.begin(), _tablo.end());
	//init smallest by comparing 1st 2 elem
	int	smolest = _tablo[1] - _tablo[0];
	//iterate on sorted vector starting from 2 coz already compared 1st two
	for (unsigned int i = 2; i < _size; i++)
	{
		//check span between current and previous [i - 1]
		int	currentSpan = _tablo[i] - _tablo[i - 1];
		//check if span is smoOoler than the smolest!
		if (currentSpan < smolest)
			smolest = currentSpan;
		//if so replace
	}
	//return smallest
	return (smolest);
}

//Longest Span: The difference between the 
//largest and smallest numbers in the sequence.
int	Span::longestSpan()
{
	if (_tablo.size() <= 1)
		throw ArrayTooSmallException();
	//look for min nbr
	int	min = *std::min_element(_tablo.begin(), _tablo.end());
	//std::cout << PURPLE << "Min is : " << min << RESET << std::endl;
	//look for max nbr 
	int	max = *std::max_element(_tablo.begin(), _tablo.end());
	//std::cout << PURPLE << "Max is : " << max << RESET << std::endl;
	//return the difference betwenn max and min
	return (max - min);
}
