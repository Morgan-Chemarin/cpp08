/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:18:40 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/23 20:11:04 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
	try
	{
		int n = 10000;

		Span sp = Span(n);
		for (int i = 0; i < n; i++)
			sp.addNumber(i % 8);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

	try
	{
		Span sp = Span(3);

		std::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);

		sp.addMultipleNumber(v.begin(), v.end());

		// sp.addNumber(5); // Too many element.
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

	return 0;
}