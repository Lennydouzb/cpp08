/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:03:38 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/30 20:26:16 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"


int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	std::cout << "my-test" << std::endl;
	std::vector<int> vect;
	for (int i = 0; i < 19997; ++i)
		vect.push_back(i + 1);
	Span spa = Span(20000);
	spa.addNumber(1);
	spa.addNumber(3);
	spa.addNumber(10000000);
	spa.addNumber(vect.begin(), vect.end());
	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;
	try{
		spa.addNumber(1);
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		spa.addNumber(vect.begin(), vect.end());
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
