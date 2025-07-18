/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:12:00 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/18 11:19:57 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span() : _N(0)
{}

Span::Span(unsigned int n) : _N(n)
{}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other) {
        _N = other._N;
        _V = other._V;
    }
    return (*this);
}

Span::~Span()
{}

// just add the number to the vector, if _N is 0, throw an exception
void Span::addNumber(unsigned int n)
{
    if (_N == 0) {
        throw Exception();
    }
    _V.push_back(n);
}

unsigned int Span::shortestSpan()
{
    if (_N < 2)
        throw Exception();

    std::vector<unsigned int> tmp = _V;
    std::sort(tmp.begin(), tmp.end());
  	unsigned int minSpan = std::numeric_limits<int>::max();
	for (std::size_t i = 1; i < tmp.size(); ++i)
    {
		unsigned int diff = tmp[i] - tmp[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}
    return minSpan;
}

// use iterators to find the the max and min elements in the vector then minus them
unsigned int Span::longestSpan() {
    if (_V.size() < 2)
        throw Exception();

    std::vector<unsigned int>::const_iterator minIt = std::min_element(_V.begin(), _V.end());
    std::vector<unsigned int>::const_iterator maxIt = std::max_element(_V.begin(), _V.end());
    return (*maxIt - *minIt);
}

// int Span::shortestSpan() {
// 	if (_v.size() < 2)
// 		throw InsufficientElementsException();

// 	std::vector<int> tmp = _v;
// 	std::sort(tmp.begin(), tmp.end());

// 	int minSpan = std::numeric_limits<int>::max();
// 	for (std::size_t i = 1; i < tmp.size(); ++i) {
// 		int diff = tmp[i] - tmp[i - 1];
// 		if (diff < minSpan)
// 			minSpan = diff;
// 	}

// 	return minSpan;
// }

const char* Span::Exception::what() const throw() {
    return "Span exception: Cannot perform operation on Span.";
}
