/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:00:52 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/30 19:04:41 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <algorithm>
#include <iostream>

class Span
{
private:
	unsigned int	size;
	unsigned int	index;
	int				*values;
public:
	Span();
	Span(unsigned int size);
	Span(const Span& aSpan);
	Span& operator=(const Span& aSpan);
	~Span();

	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	void			addNumber(int nb);
};
