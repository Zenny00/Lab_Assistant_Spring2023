#include "stack.h"

template <class T>
Stack<T>::Stack()
{
	this->top = nullptr;
}

template <class T>
Stack<T>::~Stack()
{
	SNode *curr = top, *prev = nullptr;
	
	// Remove each node from the linked list
	while (curr != nullptr) 
	{
		prev = curr;
		curr = curr->next;
		delete prev;
	}
}

template <class T>
T Stack<T>::get_top()
{
	if (top != nullptr)
		return this->top->data; // Return the value stored by the top ptr
}

template <class T>
void Stack<T>::pop()
{
	// Remove node from the front of the list
	if (top != nullptr) 
	{
		SNode *temp = top; 
		top = top->next;
		delete temp;
	}
}

template <class T>
void Stack<T>::push(T value)
{
	// Create a new node using the data passed the push function
	SNode *new_node = new SNode;

	// Initilaize node values
	new_node->data = value;
	new_node->next = nullptr;

	// If the list is empty, set the first node equal to the new value
	if (top == nullptr)
		top = new_node;
	else
	{
		// Place node at front of list
		new_node->next = top;
		top = new_node;
	}
}
