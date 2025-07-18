/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:02:48 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/18 11:46:36 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <limits>
#include <algorithm>

# define GREEN_H "\033[0;32m" //constructor called
# define RESET_H "\033[0m"
# define RED_H "\033[0;31m" //destructor called
# define BLUE_H "\033[0;34m" // getrawbit
# define YELLOW_H "\033[0;33m" //N/A
# define PURPLE_H "\033[0;35m" //N/A

class Span
{
    private:
        unsigned int                _N;
        std::vector<unsigned int>   _V;

    public:
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        void            addNumber(unsigned int n);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();

        class Exception : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
       void print()
        {
            std::cout << "Vector: ";
            for (std::size_t i = 0; i < _V.size(); ++i) {
                std::cout << _V[i] << " ";
            }
            std::cout << std::endl;
        }
};
