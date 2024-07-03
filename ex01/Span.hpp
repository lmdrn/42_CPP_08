/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:53:54 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 14:39:02 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class Span
{
	private:
	    	// Private members
		std::vector<int>		_tablo;
		unsigned int			_size;

	public:
    		// Constructor
    		Span();
    		// Constructor
    		Span(unsigned int N);

    		// Destructor
    		~Span();

    		// Copy Constructor
    		Span(const Span& copy);

    		// Copy Assignment Operator
    		Span& operator=(const Span& copy);

		//Member functions
		void		addNumber(int toAdd);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

class	AboveArrayException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("You have reached the end-size of the array. You cannot add more numbers !");
		}
};

#endif /* SPAN_HPP */
