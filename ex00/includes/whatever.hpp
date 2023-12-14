/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:05:56 by tduprez           #+#    #+#             */
/*   Updated: 2023/12/14 17:06:19 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
	return ;
}

template<typename T>
const T&	min(const T& a, const T& b)
{
	return (a < b) ? a : b;
}

template<typename T>
const T&	max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}

#endif
