/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:36:45 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/24 00:39:01 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{

	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& obj);
		Array& operator=(const Array& obj);
		~Array(void);

		void			setValueToTab(T arg, unsigned int index);
		T				getValueFromTab(unsigned int index) const;
		unsigned int	memberSize(void) const;

};

template <typename T>
Array<T>::Array(void): _size(0)
{
	this->_array = new T[0];
	this->_array[0] = 0;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	this->_array = new T[n];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = 0;
	return ;
}

template <typename T>
Array<T>::Array(const Array& obj)
{
	this->_array = NULL;
	this->_size = 0;
	if (this != &obj)
		*this = obj;
	return ;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
	this->_size = obj._size;
	if (this->_array)
		delete [] this->_array;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = obj._array[i];
	return *this;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
	return ;
}

template <typename T>
void	Array<T>::setValueToTab(T arg, unsigned int index)
{
	this->_array[index] = arg;
	return ;
}

template <typename T>
T	Array<T>::getValueFromTab(unsigned int index) const
{
	return this->_array[index];
}

template <typename T>
unsigned int	Array<T>::memberSize(void) const
{
	return this->_size;
}
