/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:01:50 by jaxztan           #+#    #+#             */
/*   Updated: 2025/08/01 12:21:21 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>

# define GREEN_H "\033[0;32m" //constructor called
# define RESET_H "\033[0m"
# define RED_H "\033[0;31m" //destructor called
# define BLUE_H "\033[0;34m" // getrawbit
# define YELLOW_H "\033[0;33m" //N/A
# define PURPLE_H "\033[0;35m" //N/A

class runtime_error : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return "Value not found in the container";
        }
};

// int type
template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error("Value not found in the container");
    return it;
}

// string type
template <typename T>
typename T::iterator easyfind(T &container, std::string value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error("Value not found in the container");
    return it;
}
