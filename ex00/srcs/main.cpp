/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:14:38 by praclet           #+#    #+#             */
/*   Updated: 2021/05/02 17:25:33 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

void displayFoundOrNot(std::vector<int> const & vect, int needle)
{
	std::cout << needle << " has ";
	if (!::easyfind(vect, needle))
		std::cout << "not ";
	std::cout << "been found." << std::endl;
}

int main(void)
{
	std::vector<int> v(5);

	v.push_back(56);
	v.push_back(42);
	displayFoundOrNot(v, -42);
	displayFoundOrNot(v, 42);
	v.push_back(-6);
	v.push_back(-20000);
	v.push_back(0);
	displayFoundOrNot(v, 0);
	displayFoundOrNot(v, 6);
	displayFoundOrNot(v, -20000);
	displayFoundOrNot(v, -6);
	std::cout << std::endl;
	return (0);
}
