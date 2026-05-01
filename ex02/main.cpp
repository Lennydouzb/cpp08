/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 20:59:49 by ldesboui          #+#    #+#             */
/*   Updated: 2026/05/01 21:16:46 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MutantStack.hpp"
#include <list>

int main()
{
	
	MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
				++it;
		}
		std::cout << "--------list test---------" << std::endl;
		std::list<int> alist;
		alist.push_back(5);
		alist.push_back(17);
		std::cout << alist.back() << std::endl;
		alist.pop_back();
		std::cout << alist.size() << std::endl;
		alist.push_back(3);
		alist.push_back(5);
		alist.push_back(737);
		//[...]
		alist.push_back(0);
		std::list<int>::iterator its = alist.begin();
		std::list<int>::iterator ites = alist.end();
		++its;
		--its;
		while (its != ites)
		{
			std::cout << *its << std::endl;
				++its;
		}
		return 0;
}
