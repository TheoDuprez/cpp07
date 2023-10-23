/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:37:16 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/24 00:37:23 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int	main(void)
{
	{
		Array<int>	array(45);

		for (unsigned int i = 0; i < 45; i++)
		{
			array.setValueToTab(i, i);
			std::cout << array.getValueFromTab(i) << std::endl;
		}
		std::cout << "Size of array : " << array.memberSize() << std::endl;
	}

	{
		Array<char>	array(45);

		for (unsigned int i = 0; i < 45; i++)
		{
			array.setValueToTab(i + 48, i);
			std::cout << array.getValueFromTab(i) << std::endl;
		}
		std::cout << "Size of array : " << array.memberSize() << std::endl;
	}
	
	{
		Array<int>	array(45);
		Array<int>	array2(array);

		for (unsigned int i = 0; i < 45; i++)
		{
			array.setValueToTab(i + 48, i);
			std::cout << array.getValueFromTab(i) << std::endl;
		}

		for (unsigned int i = 0; i < 45; i++)
		{
			// array.setValueToTab(i + 48, i);
			std::cout << array2.getValueFromTab(i) << std::endl;
		}
		// std::cout << "Size of array : " << array.memberSize() << std::endl;
	}

	return 0;
}
