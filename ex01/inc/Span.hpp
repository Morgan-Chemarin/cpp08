/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:18:43 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/23 17:42:14 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
    public:
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other); 
        ~Span();

		void addNumber(int n);

    private:
        std::vector<int> _v;
        unsigned int _maxint;

        Span();
};

#endif