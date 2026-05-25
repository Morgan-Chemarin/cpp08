/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:18:37 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/25 13:46:16 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _maxint(0)
{
}


Span::Span(unsigned int N): _maxint(N)
{
}

Span::Span(const Span& other)
{
    _maxint = other._maxint;
    _v = other._v;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        _v = other._v;
        _maxint = other._maxint;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (_v.size() == _maxint)
        throw TooManyElementException();
    _v.push_back(n);
}

int Span::shortestSpan() const
{
    if (_v.size() < 2)
        throw NoSpanException();

    std::vector<int> tmp = _v;
    int res = tmp[1] - tmp[0];

    std::sort(tmp.begin(), tmp.end());
    for (unsigned long int i = 1; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < res)
            res = tmp[i] - tmp[i - 1];
    }
    return (res);
}

int Span::longestSpan() const
{
    if (_v.size() < 2)
        throw NoSpanException();
    int min = *(std::min_element(_v.begin(), _v.end()));
    int max = *(std::max_element(_v.begin(), _v.end()));

    return (max - min);
}