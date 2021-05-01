/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:56:29 by praclet           #+#    #+#             */
/*   Updated: 2021/04/26 17:22:14 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>

template <class T> bool easyfind(T tab, int needle)
{
	typename T::iterator it = find(tab.begin(), tab.end(), needle);

	return (it != tab.end());
};

#endif
