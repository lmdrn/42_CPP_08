/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:53:27 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 15:47:30 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span test(5);
	std::cout << ORANGE << "TEST ONE: Trying to add number 0 to array of size 6" << RESET << std::endl;
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
	std::cout << std::endl;

	std::cout << ORANGE << "TEST THREE: SMOLEST SPAN" << RESET << std::endl;
	try
	{
		std::cout << GREEN << "SUCESS! Shortest Span is: " << test.shortestSpan() << RESET << std::endl;
	}
	catch(const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;	
	}
	std::cout << std::endl;

	std::cout << ORANGE << "TEST FOUR: SMOLEST SPAN WITH ARRAY TOO SMAL SHOULD THROW ERROR" << RESET << std::endl;
	Span piti(5);
	piti.addNumber(0);
	try
	{
		piti.shortestSpan();
	}
	catch(const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;	
	}
	std::cout << std::endl;

	std::cout << ORANGE << "TEST FIVE: BIGGEST SPAN" << RESET << std::endl;
	try
	{
		std::cout << GREEN << "SUCESS! Biggest Span is: " << test.longestSpan() << RESET << std::endl;
	}
	catch(const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;	
	}
	std::cout << std::endl;

	std::cout << ORANGE << "TEST SIX: TEST SPAN WITH TOO SMALL ARRAY SHOULD THROW ERROR" << RESET << std::endl;
	Span fatass(5);
	fatass.addNumber(0);
	try
	{
		fatass.longestSpan();
	}
	catch(const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;	
	}
	std::cout << std::endl;
	return(0);
}
