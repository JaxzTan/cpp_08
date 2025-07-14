/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:01:22 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/14 09:43:30 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"

int main(void)
{
    std::cout << YELLOW_H << "Testing easyfind with a vector of integers" << RESET_H << std::endl << std::endl;
    std::vector<int> vec;
    for(int i = 10; i <= 100; i += 10)
        vec.push_back(i);
    // std::cout << "size of vector: " << vec.size() << std::endl;
    try // Attempt to find the value 10 in the vector
    {
        std::cout << "looking for value: 10 //should found" << std::endl;
        std::cout << BLUE_H << "Found value: " << *easyfind(vec, 10) << RESET_H << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << RED_H << e.what() << RESET_H << std::endl;
    }
    try // Attempt to find the value 100 in the vector
    {
        std::cout << "looking for value: 100 //should found" << std::endl;
        std::cout << BLUE_H << "Found value: " << *easyfind(vec, 100) << RESET_H << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << RED_H << e.what() << RESET_H << std::endl;
    }
    try // Attempt to find the value 55 in the vector
    {
        std::cout << "looking for value: 55 //shouldn't found" << std::endl;
        std::cout << RED_H << "Found value: " << RESET_H << *easyfind(vec, 55) << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << RED_H << e.what() << RESET_H << std::endl;
    }
    try // Attempt to find the value 32 in the vector
    {
        std::cout << "looking for value: 32 //shouldn't found" << std::endl;
        std::cout << RED_H << "Found value: " << RESET_H << *easyfind(vec, 32) << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << RED_H << e.what() << RESET_H << std::endl;
    }

    std::cout << "---------------------------------------------------" << std::endl;

    std::vector<std::string> strVec;
    strVec.push_back("Hello");
    strVec.push_back("World");
    strVec.push_back("42");
    strVec.push_back("C++");
    std::cout << YELLOW_H <<"Testing easyfind with a vector of strings" << RESET_H << std::endl << std::endl;
    // std::cout << "size of vector: " << strVec.size() << std::endl;
    try // Attempt to find the string "Hello" in the vector
    {
        std::cout << "looking for value: Hello //should found" << std::endl;
        std::cout << BLUE_H << "Found value: " << *easyfind(strVec, std::string("Hello")) << RESET_H << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << RED_H << e.what() << RESET_H << std::endl;
    }
    try // Attempt to find the string "42" in the vector
    {
        std::cout << "looking for value: 42 //should found" << std::endl;
        std::cout << BLUE_H << "Found value: " << *easyfind(strVec, std::string("42")) << RESET_H << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << RED_H << e.what() << RESET_H << std::endl;
    }
    try // Attempt to find the string "hello" in the vector
    {
        std::cout << "looking for value: hello //shouldn't found" << std::endl;
        std::cout << RED_H << "Found value: " << RESET_H << *easyfind(strVec, std::string("hello")) << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << RED_H << e.what() << RESET_H << std::endl;
    }
    try // Attempt to find the string "43" in the vector
    {
        std::cout << "looking for value: 43 //shouldn't found" << std::endl;
        std::cout << RED_H << "Found value: " << RESET_H << *easyfind(strVec, std::string("43")) << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << RED_H << e.what() << RESET_H << std::endl;
    }
    return 0;
}
