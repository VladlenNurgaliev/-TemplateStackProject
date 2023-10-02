#pragma once

#include <vector>

template <class T>
class Stack
{
private:
	T* arr;
	int size;
	int index;

public:
	Stack(T number);
	~Stack();

	bool empty();
	bool full();

	bool push(T TopValue);
	T pop();
};