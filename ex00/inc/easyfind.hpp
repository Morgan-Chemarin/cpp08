/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:20:02 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/25 12:36:42 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

class NoOccurrenceFoundException: public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("Occurence not found.");
        }
};

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
    typename T::iterator i = std::find(container.begin(), container.end(), n);
    if (i == container.end())
        throw NoOccurrenceFoundException();
    return (i);
}

#endif