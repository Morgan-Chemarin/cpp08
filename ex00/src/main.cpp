/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:22:11 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/23 17:20:08 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <exception>

#include "easyfind.hpp"

int main()
{
	// VECTOR TEST
	try
	{
		std::vector<int> v;
		std::vector<int>::iterator it;
		
		v.push_back(1);
		v.push_back(3);
		v.push_back(6);
		v.push_back(2);
		v.push_back(9);
		
		it = easyfind(v, 6);
		std::cout << "Occurence " << *(it) << " found." << std::endl;

		it = easyfind(v, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	
	// LIST TEST
	try
	{
		std::list<int> l;
		std::list<int>::iterator it;
		
		l.push_back(1);
		l.push_back(3);
		l.push_back(6);
		l.push_back(2);
		l.push_back(9);
		
		it = easyfind(l, 6);
		std::cout << "Occurence " << *(it) << " found." << std::endl;

		it = easyfind(l, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}