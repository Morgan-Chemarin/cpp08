/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:37:39 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/25 12:24:32 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << "top : " << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << "size : " << mstack.size() << std::endl;

	mstack.pop();

	std::cout << "empty : " << mstack.empty() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	// ITERATOR
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;

	std::cout << "mstack :";
	while (it != ite)
	{
		std::cout << " " << *it;
		++it;
	}
	std::cout << std::endl;

	// REVERSE_ITERATOR
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	
	++rit;
	--rit;
	
	std::cout << "reverse_mstack :";
	while (rit != rite)
	{
		std::cout << " " << *rit;
		++rit;
	}
	std::cout << std::endl;
	
	std::stack<int> s(mstack);
	return 0;
}