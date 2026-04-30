/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:10:49 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/30 19:16:29 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>


Span::Span()
{
	size = 5;
	values = new int[5]();
	index = 0;
}

Span::~Span()
{
	delete []values;
}

Span::Span(unsigned int size)
{
	this->size = size;
	values = new int[size]();
	index = 0;
}

Span::Span(const Span& aSpan)
{
	this->size = aSpan.size;
	this->values = new int[this->size]();
	index = aSpan.index;
	for (unsigned int i = 0; i < this->index; ++i)
	{
		this->values[i] = aSpan.values[i];
	}
}

Span& Span::operator=(const Span& aSpan)
{
	if (this == &aSpan)
		return (*this);
	delete []values;
	this->size = aSpan.size;
	this->values = new int[this->size]();
	for (unsigned int i = 0; i < this->index; ++i)
	{
		this->values[i] = aSpan.values[i];
	}
	index = aSpan.index;
	return (*this);
}


unsigned int	Span::shortestSpan()
{
	if (this->index < 2)
		throw std::exception();
	Span tmp(*this);
	std::sort(tmp.values, tmp.values + tmp.index);
	unsigned int shortest = UINT_MAX;
	for (unsigned int i = 1; i < tmp.index; ++i)
	{
		if (static_cast<unsigned int>(abs(tmp.values[i] - tmp.values[i - 1])) < shortest)
			shortest = abs(tmp.values[i] - tmp.values[i - 1]);
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	if (this->index < 2)
		throw std::exception();
	Span tmp(*this);
	std::sort(tmp.values, tmp.values + tmp.index);
	return (abs(tmp.values[index - 1] - tmp.values[0]));
}

void Span::addNumber(int nb)
{
	if (index == size)
		throw std::exception();
	this->values[index] = nb;
	index += 1;
}

