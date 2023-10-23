/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:07:33 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/23 17:22:56 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

#include <iostream>

template <typename T>
static void ft_printer(const T& item);

int main()
{
	const int	size = 5;

	std::cout << "Print int" << std::endl;
	int	array1[size] = { 1, 2, 3, 4, 42 };
	iter(array1, size, ft_printer);

	std::cout << std::endl;

	std::cout << "Print string" << std::endl;
	std::string	array2[size] = { "un", "deux", "trois", "quatre", "quarante-deux" };
	iter(array2, size, ft_printer);

	return 0;
}

template <typename T>
static void ft_printer(T const & item)
{
	std::cout << item << std::endl;
}

