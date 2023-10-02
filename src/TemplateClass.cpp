#include "TemplateClass.h"

template<class T>
Stack<T>::Stack(T number)
{
	index = 0;
	arr = new T[number];
	size = number;
}

template<class T>
Stack<T>::~Stack()
{
	delete[] arr;
}

template<class T>
bool Stack<T>::empty()
{
	if (index <= 0)
		return true;
	else
		return false;
}

template<class T>
bool Stack<T>::full()
{
	if (index == size)
		return true;
	else
		return false;
}

template<class T>
bool Stack<T>::push(T TopValue)
{
	if (index == size)
		return false;
	else
	{
		arr[index] = TopValue;
		index++;
		return true;
	}
}

template<class T>
T Stack<T>::pop()
{
	if (index < 0)
		return 0;
	else
		return arr[--index];
}

template class Stack<int>;
template class Stack<double>;
template class Stack<float>;