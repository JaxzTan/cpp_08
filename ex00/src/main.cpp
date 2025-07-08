/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:01:22 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/08 17:16:32 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"

int main(void)
{
    std::vector<int> vec;
    for(int i = 10; i < 100; i += 10)
        vec.push_back(i);
    std::cout << "Vector contents: " << vec.front() << std::endl;
    try
    {
        std::cout << "Found value: " << *easyfind(vec, 10) << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
