/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:32:29 by praclet           #+#    #+#             */
/*   Updated: 2021/04/28 11:01:33 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _nbElements(0), _tab()
{
}

Span::Span(unsigned int n) : _nbElements(n), _tab(n, 0)
{
}

Span::Span(Span const & src) : _nbElements(src._nbElements), _tab(src._tab)
{
}

Span::~Span()
{
}

Span & Span::operator=(Span const & src)
{
	if (this != &src)
	{
		_nbElements = src._nbElements;
		_tab = src._tab;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_nbElements < _tab.size())
	{
		_tab.push_back(n);
		_nbElements++;
	}
	else
		throw(new ContainerFullException());
}

unsigned int Span::shortSpan(void) const
{
	if (_tab.size() <= 1)
		throw(new NotEnoughDataException());
	std::vector<int> tmp = _tab;
	unsigned int res = std::numeric_limits<unsigned int>::max();

	std::sort(tmp.begin(), tmp.end());
	for (unsigned int i = 0;i < tmp.size() - 1;i++)
		if ((unsigned int)(tmp[i + 1] - tmp[i]) < res)
		   res = tmp[i + 1] - tmp[i];
	return (res);
}

unsigned int Span::longestSpan(void) const
{
	if (_tab.size() <= 1)
		throw(new NotEnoughDataException());
	return (max_element(_tab.begin(), _tab.end()) -
		min_element(_tab.begin(), _tab.end()));
}

Span::NotEnoughDataException::NotEnoughDataException()
{
}

const char* Span::NotEnoughDataException::what(void) const throw()
{
	return ("Not enough data to execute that action.");
}

Span::ContainerFullException::ContainerFullException()
{
}

const char* Span::ContainerFullException::what(void) const throw()
{
	return ("Object is full.");
}

