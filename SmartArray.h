#pragma once
#include <iostream>

template <class T, int sze>
class SmartArray
{
private:
	T* mas;
	int size;
public:
	SmartArray();
	void show_array();
};



template <class T, int sze>
SmartArray<T,sze>::SmartArray()
{
	
	mas = new T[sze];
	for (int i = 0; i < sze; i++) mas[i] = (T)i/2;
	this->size = sze;
}

template <class T, int sze>
void SmartArray<T,sze>::show_array()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << mas[i] << ", ";
		std::cout << std::endl;
	}
}