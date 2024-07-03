/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:53:54 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 13:54:18 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class Span
{
	private:
	    	// Private members

	public:
    		// Constructor
    		Span();

    		// Destructor
    		~Span();

    		// Copy Constructor
    		Span(const Span& copy);

    		// Copy Assignment Operator
    		Span& operator=(const Span& copy);
};

#endif /* SPAN_HPP */
