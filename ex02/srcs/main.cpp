/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:37:16 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/24 19:35:01 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int	main(void)
{
	{
		Array<int>	array(45);

		for (unsigned int i = 0; i < 45; i++)
			std::cout << (array[i] = i) << std::endl;
		std::cout << "Size of array : " << array.memberSize() << std::endl;
		std::cout << "----------------------------------------" << std::endl;
	}

	{
		Array<char>	array(42);

		for (unsigned int i = 0; i < 42; i++)
			std::cout << (array[i] = i + 48) << std::endl;
		std::cout << "Size of array : " << array.memberSize() << std::endl;
		std::cout << "----------------------------------------" << std::endl;
	}
	
	{
		Array<int>	array(31);
		Array<int>	array2(array);

		for (unsigned int i = 0; i < 31; i++)
			std::cout << (array[i] = i + 48) << std::endl;
		for (unsigned int i = 0; i < 31; i++)
			std::cout << array2[i] << std::endl;
		try
		{
			std::cout << array[150] << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "Size of array : " << array.memberSize() << std::endl;
	}

	return 0;
}
