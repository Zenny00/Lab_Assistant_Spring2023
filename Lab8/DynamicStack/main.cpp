#include <iostream>
#include "stack.h"

int main() {
	Stack<int> my_stack;
	
	my_stack.push(10);
	my_stack.push(20);
	my_stack.push(30);
	std::cout << "Top element: " << my_stack.get_top() << std::endl;
	
	my_stack.pop();
	std::cout << "Top element after pop: " << my_stack.get_top() << std::endl;
	
	my_stack.pop();
	my_stack.pop();
	my_stack.pop();
	std::cout << "Top element after all pops: " << my_stack.get_top() << std::endl;
	
	return 0;
}
