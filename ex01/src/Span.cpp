/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:18:37 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/23 17:44:34 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
        throw std::exception();
    _v.push_back(n);
}