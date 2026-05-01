/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 20:17:39 by ldesboui          #+#    #+#             */
/*   Updated: 2026/05/01 21:08:54 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack();	
	~MutantStack();	
	MutantStack(const MutantStack &aMutant);	
	MutantStack& operator=(const MutantStack &aMutant);

	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack<T>::iterator begin();
	MutantStack<T>::iterator end();
};
#include "MutantStack.tpp"
