/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:01:50 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/08 17:04:07 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>

class runtime_error : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return "Value not found in the container";
        }
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error("Value not found in the container");
    return it;
}

