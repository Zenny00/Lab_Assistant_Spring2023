#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <cstdlib>
#include "ListCollection.h"

using namespace std;
template <class T>
class Stack {
	private:
		ListCollection<T> stack;
	public:
		Stack();
		~Stack();
		void displayStack(bool nl = false) const;
		Stack(const Stack &obj);
		const Stack operator=(const Stack &right);
		void clear();
		int size();
		void push(T);
		T pop();
		bool isEmpty();
};
	
template<class T>
Stack<T>::Stack() {}
template<class T>
Stack<T>::~Stack() {}

template<class T>
Stack<T>::Stack(const Stack &obj) {
	stack = obj.stack;
}

template<class T>
const Stack<T> Stack<T>::operator=(const Stack &right) {
	stack = right.stack;
	return *this;
}

template<class T>
void Stack<T>::displayStack(bool nl) const {
	stack.displayList(nl);
}

template<class T>
int Stack<T>::size() {
	return stack.size();
}

template<class T>
void Stack<T>::push(T elt) {
	stack.pushFront(elt);
}

template<class T>
T Stack<T>::pop() {
	return stack.popFront();
}

template<class T>
void Stack<T>::clear() {
	stack.clear();
}

template<class T>
bool Stack<T>::isEmpty() {
	return stack.size() == 0;
}
#endif
