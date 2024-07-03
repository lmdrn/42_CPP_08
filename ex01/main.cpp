/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:53:27 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 14:57:58 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span test(5);
	std::cout << ORANGE << "TEST ONE: Trying to add number 5 to array of size 6" << RESET << std::endl;
	try
	{
		test.addNumber(0);
	}
	catch(const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;	
	}
	std::cout << std::endl;
	std::cout << ORANGE << "TEST TWO: Trying to add 6 more nummbers to go out ouf bounds" << RESET << std::endl;
	try
	{
		test.addNumber(1);
		test.addNumber(2);
		test.addNumber(3);
		test.addNumber(4);
		test.addNumber(5);
	}
	catch(const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;	
	}
	return(0);
}
