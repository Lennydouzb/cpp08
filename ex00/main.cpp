/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:31:06 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/30 17:46:50 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int> Tab;
	Tab.push_back(1);
	Tab.push_back(2);
	Tab.push_back(3);
	Tab.push_back(4);
	Tab.push_back(5);
	std::vector<int>::iterator iter = easyfind(Tab, 3);
	std::cout << *iter << std::endl;
	std::cout << *(++iter) << std::endl;
	std::cout << *(++iter) << std::endl;
}
