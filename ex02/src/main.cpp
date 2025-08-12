/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:27:07 by jaxztan           #+#    #+#             */
/*   Updated: 2025/08/12 15:30:31 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

int main() {
    std::cout << YELLOW_H <<"===== Testing MutantStack =====" << RESET_H << std::endl;

    // Test default constructor
    MutantStack<int> ms1;
    std::cout << "Empty stack size: " << ms1.size() << std::endl;

    // Test push and size
    ms1.push(10);
    ms1.push(20);
    ms1.push(30);
    std::cout << "After pushing 10,20,30 - size: " << ms1.size() << std::endl;

    // Test copy constructor
    MutantStack<int> ms2(ms1);
    std::cout << "Copied stack size: " << ms2.size() << std::endl;

    // Test assignment operator
    MutantStack<int> ms3;
    ms3 = ms1;
    std::cout << "Assigned stack size: " << ms3.size() << std::endl;

    // Test regular iteration (begin/end)
    std::cout << "\nForward iteration (begin to end): ";
    for (MutantStack<int>::iterator it = ms1.begin(); it != ms1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "(Expected: 10 20 30)" << std::endl;

    // Test const iteration
    const MutantStack<int>& const_ms = ms1;
    std::cout << "Const iteration: ";
    for (MutantStack<int>::const_iterator it = const_ms.begin(); it != const_ms.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "(Expected: 10 20 30)" << std::endl;

    // Test reverse iteration (rbegin/rend)
    std::cout << "\nReverse iteration (rbegin to rend): ";
    for (MutantStack<int>::reverse_iterator rit = ms1.rbegin(); rit != ms1.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << "(Expected: 30 20 10)" << std::endl;

    // Test const reverse iteration
    std::cout << "Const reverse iteration: ";
    for (MutantStack<int>::const_reverse_iterator rit = const_ms.rbegin(); rit != const_ms.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << "(Expected: 30 20 10)" << std::endl;

    // Test stack operations work
    std::cout << "\nTop element: " << ms1.top() << " (Expected: 30)" << std::endl;
    ms1.pop();
    std::cout << "After pop, top element: " << ms1.top() << " (Expected: 20)" << std::endl;

    // Test modification through iterator
    std::cout << "\nModifying elements through iterator:" << std::endl;
    for (MutantStack<int>::iterator it = ms1.begin(); it != ms1.end(); ++it) {
        *it += 100;  // Add 100 to each element
    }
    std::cout << "Modified stack: ";
    for (MutantStack<int>::iterator it = ms1.begin(); it != ms1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "(Expected: 110 120)" << std::endl;

    // Test empty stack iteration
    MutantStack<int> empty;
    std::cout << "\nEmpty stack iteration (should print nothing): ";
    for (MutantStack<int>::iterator it = empty.begin(); it != empty.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "(Expected: no output)" << std::endl;

    std::cout << YELLOW_H << "\n===== All Tests Passed =====" << RESET_H << std::endl;
    return 0;
}
