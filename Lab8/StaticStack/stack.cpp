#include "stack.h"

template <class T>
Stack<T>::Stack(int size)
{
	this->top = 0;
	this->size = size;
	this->array = new T[size];
}

template <class T>
Stack<T>::~Stack()
{
	delete[] array;
}

template <class T>
T Stack<T>::get_top()
{
	return this->array[top-1];
}

template <class T>
void Stack<T>::pop()
{
	if (top > 0) {
		top--;
		this->array[top] = T();
	}
}

template <class T>
void Stack<T>::push(T data)
{
	if (top < size) {
		this->array[top] = data;
		top++;
	}
}
