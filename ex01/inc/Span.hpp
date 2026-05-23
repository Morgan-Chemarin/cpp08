/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:18:43 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/23 20:13:37 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>

class TooManyElementException: public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Too many elements in that container.");
		}
};

class NoSpanException: public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Too few elements to have span.");
		}
};

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other); 
		~Span();

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

		template <typename Iterator>
		void addMultipleNumber(Iterator begin, Iterator end)
		{
			while (begin != end)
			{
				addNumber(*begin);
				++begin;
			}
		}

	private:
		std::vector<int> _v;
		unsigned int _maxint;

};

#endif