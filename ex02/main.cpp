/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:38:03 by lmedrano          #+#    #+#             */
/*   Updated: 2024/07/09 15:43:10 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main(void)
{
	std::cout << GREEN << "TEST FROM SUBJECT" << RESET << std::endl;
	MutantStack<int> mstack;
	std::cout << ORANGE << "Adding 5 to stack..." << RESET << std::endl;
	std::cout << ORANGE << "Adding 7 to stack..." << RESET << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << RED << "ACTION : CHECK CURRENT 1ST IN STACK: " << RESET << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << RED << "ACTION : POP " << RESET << "Removing 1st element in stack..." << std::endl;
	mstack.pop();
	std::cout << RED << "ACTION : CHECK CURRENT 1ST IN STACK: " << RESET << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << RED << "ACTION : CHECK SIZE: " << RESET << "Should be 1..." << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << ORANGE << "Adding 3 to stack..." << RESET << std::endl;
	std::cout << ORANGE << "Adding 5 to stack..." << RESET << std::endl;
	std::cout << ORANGE << "Adding 737 to stack..." << RESET << std::endl;
	std::cout << ORANGE << "Adding 0 to stack..." << RESET << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << RED << "ACTION : PRINT STACK WITH ITERATOR: " << RESET << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int>::iterator cit = mstack.begin();
	MutantStack<int>::iterator cite = mstack.end();
	std::cout << RED << "ACTION : PRINT STACK WITH CONST ITERATOR: " << RESET << std::endl;
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}

	std::cout << RED << "ACTION : CREATE COPY STACK " << RESET << std::endl;
	std::stack<int> s(mstack);
	//Prints in reverse because stack is LIFO
	while (!s.empty())
	{
        	std::cout << s.top() << " ";
        	s.pop();
    	}
    	std::cout << std::endl;


	//CHECK IT ALSO WORKS WITH DIFFERENT CONTAINER
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::list<int>::iterator itList;
	std::cout << RED << "ACTION : PRINT LST: " << RESET << std::endl;
	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::cout << RED << "ACTION : CHECK SIZE: " << RESET << "Should be 2..." << std::endl;
	std::cout << lst.size() << std::endl;
	std::cout << RED << "ACTION : CHECK CURRENT 1ST IN LIST: " << RESET << std::endl;
	std::cout << lst.front() << std::endl;
	std::cout << RED << "ACTION : CHECK CURRENT LAST IN LIST: " << RESET << std::endl;
	std::cout << lst.back() << std::endl;
	std::cout << RED << "ACTION : ADD ELEMT IN LAST POS IN LIST: " << RESET << std::endl;
	lst.push_back(8);
	std::cout << RED << "ACTION : PRINT LST: " << RESET << std::endl;
	std::list<int>::iterator lit2 = lst.begin();
	std::list<int>::iterator lite2 = lst.end();
	while (lit2 != lite2)
	{
		std::cout << *lit2 << std::endl;
		++lit2;
	}

	std::cout << RED << "ACTION : CREATE STACK FROM LIST " << RESET << std::endl;
	std::stack<int, std::list<int> > s2(lst);
	//Prints in reverse because stack is LIFO
	//std::cout << std::endl;
	while (!s2.empty())
	{
        	std::cout << s2.top() << " ";
        	s2.pop();
    	}
    	std::cout << std::endl;
	
	return (0);
}
