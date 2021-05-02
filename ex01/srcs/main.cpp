/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:14:38 by praclet           #+#    #+#             */
/*   Updated: 2021/05/02 17:40:21 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include "Span.hpp"

int main(void)
{
	{
		Span tmp;
		Span tmp1(tmp);

		try {
			tmp.addNumber(0);
		} catch (std::exception const & e) {
			std::cout << "Can't add number: " << e.what() << std::endl;
		}
		try {
			tmp.addNumber(10,100);
		} catch (std::exception const & e) {
			std::cout << "Can't add range of numbers: " << e.what() << std::endl;
		}
		try {
			tmp1.addNumber(0);
		} catch (std::exception const & e) {
			std::cout << "Can't add number: " << e.what() << std::endl;
		}
		try {
			tmp1.addNumber(10,100);
		} catch (std::exception const & e) {
			std::cout << "Can't add range of numbers: " << e.what() << std::endl;
		}
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span tmp(3);

		tmp.addNumber(1);
		tmp.addNumber(2);
		tmp.addNumber(3);
		try {
			tmp.addNumber(4);
		} catch (std::exception const & e) {
			std::cout << "Can't add number: " << e.what() << std::endl;
		}
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span tmp(3);

		tmp.addNumber(1,2);
		tmp.addNumber(3);
		try {
			tmp.addNumber(4);
		} catch (std::exception const & e) {
			std::cout << "Can't add number: " << e.what() << std::endl;
		}
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span tmp1(5);

		try {
			tmp1.addNumber(1,6);
		} catch (std::exception const & e) {
			std::cout << "Can't add range of numbers: " << e.what() << std::endl;
		}
		tmp1.addNumber(1,5);
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span sp(5);

		sp.addNumber(1);
		sp.addNumber(0);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span sp(5);

		try {
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception const & e) {
			std::cout << "Can't find shortest span: " << e.what() << std::endl;
		}
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span sp(5);

		try {
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception const & e) {
			std::cout << "Can't find longest span: " << e.what() << std::endl;
		}
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span sp(5);
	
		sp.addNumber(9);
		try {
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception const & e) {
			std::cout << "Can't find shortest span: " << e.what() << std::endl;
		}
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span sp(5);

		sp.addNumber(9);
		try {
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception const & e) {
			std::cout << "Can't find longest span: " << e.what() << std::endl;
		}
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span sp(5);

		sp.addNumber(std::numeric_limits<int>::max());
		sp.addNumber(std::numeric_limits<int>::min());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span sp(15000);

		sp.addNumber(25,15000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Span sp(15001);

		for (int i = 0;i < 45000;i+=3)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}
