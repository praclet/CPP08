/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:02:12 by praclet           #+#    #+#             */
/*   Updated: 2021/05/02 17:38:23 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T> class MutantStack : public std::stack<T>
{
	public:
		typedef std::stack<int>::container_type::iterator iterator;
		MutantStack() : std::stack<T>()
		{
		};
		MutantStack(MutantStack const & src) : std::stack<T>(src)
		{
		};
		~MutantStack()
		{
		};
		MutantStack const operator=(MutantStack const & src)
		{
			if (&src != this)
				this->std::stack<T>::operator=(src);
			return (*this);
		};
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
};

#endif
