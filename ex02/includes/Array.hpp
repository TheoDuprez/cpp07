/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:36:45 by tduprez           #+#    #+#             */
/*   Updated: 2024/01/05 13:47:02 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

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

		T&	operator[](const unsigned int index);
		void			setValueToTab(T arg, unsigned int index);
		T				getValueFromTab(unsigned int index) const;
		unsigned int	memberSize(void) const;

};

template <typename T>
Array<T>::Array(void): _size(0)
{
	this->_array = new T[0]();
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	this->_array = new T[n]();
	return ;
}

template <typename T>
Array<T>::Array(const Array& obj)
{
	if (this != &obj)
	{
		this->_array = NULL;
		*this = obj;
	}
	return ;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
	this->_size = obj._size;
	if (this->_array)
		delete [] this->_array;
	this->_array = new T[this->_size]();
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
T&	Array<T>::operator[](const unsigned int index)
{
	if (index >= this->_size)
		throw std::out_of_range("Error, the index is out of range !");
	return this->_array[index];
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

#endif
