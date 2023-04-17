#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
	private:
		int size;
		int top;
		T *array;
	public:
		Stack(int sz = 10);
		~Stack();
		T get_top();
		void pop();
		void push(T);
};

#endif
