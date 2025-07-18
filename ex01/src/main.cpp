/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:10:52 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/18 11:51:26 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

// int main() {
//     try {
//         Span span(5);
//         span.addNumber(1);
//         span.addNumber(3);
//         span.addNumber(7);
//         span.addNumber(9);
//         span.addNumber(2);

//         std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
//         std::cout << "Longest Span: " << span.longestSpan() << std::endl;

//     } catch (const Span::exception &e) {
//         std::cerr << e.what() << std::endl;
//     }

//     return 0;
// }

int main()
{
    std::cout << GREEN_H << "mandotory test: by subject pdf" << RESET_H << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
    std::cout << "longest span = " << sp.longestSpan() << std::endl;

    // sp.print();
    std::cout << YELLOW_H << "bonus test: 10,000 numbers" << RESET_H << std::endl;
    Span sp2 = Span(10000);
    std::srand(time(0));
    for(int i = 0; i < 10000; ++i)
    {
        sp.addNumber(rand());
    }
    std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
    std::cout << "longest span = " << sp.longestSpan() << std::endl;
    return 0;
}
