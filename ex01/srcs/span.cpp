/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:32:29 by praclet           #+#    #+#             */
/*   Updated: 2021/04/27 18:01:37 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _nbElements(0), _tab()
{
}

Span::Span(int n) : _nbElements(n), _tab(n, 0)
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

int Span::shortSpan(void) const
{
	;
}

int Span::longestSpan(void) const
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

