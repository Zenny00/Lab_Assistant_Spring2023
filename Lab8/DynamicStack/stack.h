#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
	// Stack Node struct
	struct SNode
	{
		// Data members
		T data;
		SNode *next;
	};

	// Private data members
	private:
		SNode *top;
	public:
		// Constructor and destructor
		Stack();
		~Stack();

		// Public member functions
		T get_top();
		void pop();
		void push(T);
};

#endif
