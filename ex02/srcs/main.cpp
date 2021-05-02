/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:14:38 by praclet           #+#    #+#             */
/*   Updated: 2021/05/02 08:43:21 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main()
{
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
		std::stack<int> s(mstack);
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		MutantStack<int> mstack0;
		MutantStack<int> mstack1;

		mstack0.push(23);
		mstack0.push(43);
		mstack1 = mstack0;
		MutantStack<int>::iterator it = mstack1.begin();
		MutantStack<int>::iterator ite = mstack1.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		MutantStack<int> mstack0;

		mstack0.push(203);
		mstack0.push(243);

		MutantStack<int> mstack1(mstack0);

		MutantStack<int>::iterator it = mstack1.begin();
		MutantStack<int>::iterator ite = mstack1.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return (0);
}
