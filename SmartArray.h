#pragma once
#include <iostream>

template <class T>
class SmartArray
{
private:
	T* mas;
	int size;
public:
	SmartArray(int size);
	void show_array();
};



template <class T>
SmartArray<T>::SmartArray(int size)
{
	
	mas = new T[size];
	for (int i = 0; i < size; i++) mas[i] = (T)i/2;
	this->size = size;
}

template <class T>
void SmartArray<T>::show_array()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << mas[i] << ", ";
		std::cout << std::endl;
	}
}