/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:32:37 by praclet           #+#    #+#             */
/*   Updated: 2021/04/28 11:06:37 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <vector>

class Span
{
	private:
		unsigned int _nbElements;
		std::vector<int> _tab;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const & src);
		virtual ~Span();
		Span & operator=(Span const & src);
		void addNumber(int n);
		void addNumber(int begin, int end);
		unsigned int shortSpan(void) const;
		unsigned int longestSpan(void) const;
		class NotEnoughDataException : public std::exception
		{
			public:
				NotEnoughDataException();
				virtual const char* what(void) const throw();
		};
		class ContainerFullException : public std::exception
		{
			public:
				ContainerFullException();
				virtual const char* what(void) const throw();
		};
};

#endif
