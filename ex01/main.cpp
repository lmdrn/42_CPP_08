/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:53:27 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 16:29:47 by lmedrano         ###   ########.fr       */
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

	std::cout << ORANGE << "TEST SEVEN: CREATE ARRAY + POPULATE IT THROUGH ITERATOR" << RESET << std::endl;
	Span	coucou(10);
	int tmp[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> vecna(tmp, tmp + sizeof(tmp) / sizeof(int));
	try
	{
		coucou.addNbrsWithIterator(vecna.begin(), vecna.end());
	}
	catch(const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;	
	}
	std::cout << PURPLE << "checking array was filled" << RESET << std::endl;
	std::vector<int>::iterator loop = vecna.begin();
	for (loop = vecna.begin(); loop != vecna.end();loop++)
	{
		std::cout << *loop << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << ORANGE << "TEST EIGHT: CREATE ARRAY + POPULATE IT THROUGH ITERATOR WITH MORE THAN ARRAY SIZE SHOULD THROW ERROR" << RESET << std::endl;
	Span	coucou2(10);
	int tmp2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int> vecna2(tmp2, tmp2 + sizeof(tmp2) / sizeof(int));
	try
	{
		coucou2.addNbrsWithIterator(vecna2.begin(), vecna2.end());
	}
	catch(const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;	
	}
	return(0);
}

//main du sujet
//int main()
//{
//	Span sp = Span(5);
//	sp.addNumber(6);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
//	return 0;
//}
