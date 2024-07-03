/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:08:46 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/03 14:17:25 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include "Easyfind.tpp"

int main(void)
{
	std::cout << ORANGE << "TEST ONE: testing with vector" << RESET << std::endl;
	std::vector<int> v(4);
	//direct access to operator [] donc je peux assigner a l'arrache comme ca..
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	v[3] = 4;
	v[4] = 5;
	std::cout << GREEN << "XX -- Printing list -- XX" << RESET << std::endl;
	for (unsigned int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
	try 
	{
		easyfind(v, 2);
	}
	catch (const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;
	}
	std::cout << "" << std::endl;
	

	std::cout << ORANGE << "TEST TWO: testing with list" << RESET << std::endl;
	std::list<int> l(4);
	//dynamic array , operator [] not defined , support random access iterators
	//donc je dois travers la liste de maniere sequentielle pour acceder ou modifier valeurs
	//donc i need to do this shit
	std::list<int>::iterator iter = l.begin();
	*iter++ = 6;
	*iter++ = 7;
	*iter++ = 8;
	*iter++ = 9;
	*iter++ = 10;
	std::cout << GREEN << "XX -- Printing list -- XX" << RESET << std::endl;
	for (iter = l.begin(); iter != l.end(); iter++)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	std::cout << "" << std::endl;
	try 
	{
		easyfind(l, 11);
	}
	catch (const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;
	}
	std::cout << "" << std::endl;
	

	std::cout << ORANGE << "TEST THREE: testing with vector non existing value" << RESET << std::endl;
	std::vector<int> v2(4);
	v2[0] = 1;
	v2[1] = 2;
	v2[2] = 3;
	v2[3] = 4;
	v2[4] = 5;
	std::cout << GREEN << "XX -- Printing list -- XX" << RESET << std::endl;
	for (unsigned int i = 0; i < v2.size(); i++)
	{
		std::cout << v2[i] << " ";
	}
	std::cout << std::endl;
	try 
	{
		easyfind(v2, 6);
	}
	catch (const std::exception& error)
	{
		std::cout << RED << "ERROR: " << error.what() << RESET << std::endl;
	}
	std::cout << "" << std::endl;
	return (0);
}
