/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:27:10 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/20 11:29:22 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>
# include <iostream>

template <typename T> class MutantStack: public std::stack<T> {
	public:
		// Default constructor
		MutantStack();

		// Copy constructor
		MutantStack(MutantStack const &other);

		// Copy assignment constructor
		MutantStack &operator=(MutantStack const &other);

		// Destructor
		~MutantStack();

		// Definition
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		// Methods
		iterator begin();
		iterator end();

		const_iterator begin() const;
		const_iterator end() const;

		reverse_iterator rbegin();
		reverse_iterator rend();

		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

# include "MutantStack.tpp"
