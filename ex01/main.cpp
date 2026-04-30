/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:03:38 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/30 19:34:56 by ldesboui         ###   ########.fr       */
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
	Span spa = Span(20000);
	spa.addNumber(1);
	spa.addNumber(3);
	spa.addNumber(10000000);
	for (int i = 0; i < 19997; ++i)
		spa.addNumber(i + 1);
	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;
	try{
		spa.addNumber(1);
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
