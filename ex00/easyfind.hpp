/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:13:43 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/30 17:46:03 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <algorithm>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T &a, const int nb)
{
	for (typename T::iterator iter = a.begin();
			iter != a.end(); ++iter)
	{
		if (*iter == nb)
			return (iter);
	}
	throw std::exception();
}
