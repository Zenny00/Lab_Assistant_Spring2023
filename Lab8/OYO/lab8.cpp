#include <iostream>
#include <sstream>
#include "ListCollection.h"
#include "Stack.h"

using namespace std;
int main() {
// string input = "234 32 + 7 *";
// Must have spaces between tokens.
	string input;
	cout << "Enter a postfix expression: ";
	getline(cin, input);
	ListCollection<string> tokens;
	stringstream inputstream(input);
	string token;

	// Tokenizing w.r.t. space ' '
	while (getline(inputstream, token, ' '))
		tokens.pushBack(token);
	
	// Printing the token vector for testing
	// for(int i = 0; i < tokens.size(); i++)
	// cout << tokens.getElement(i) << endl;
	
	Stack<double> evalstack;
	for (int i = 0; i < tokens.size(); i++) {
		string token = tokens.getElement(i);
		if (token != "") {
			char c = token[0];
			if (c >= '0' && c <= '9') {
				double val = atof(token.c_str());
				evalstack.push(val);
			} else if (token == "+") {
				double a = evalstack.pop();
				double b = evalstack.pop();
				evalstack.push(b + a);
			} else if (token == "-") {
				double a = evalstack.pop();
				double b = evalstack.pop();
				evalstack.push(b - a);
			} else if (token == "*") {
				double a = evalstack.pop();
				double b = evalstack.pop();
				evalstack.push(b * a);
			} else if (token == "/") {
				double a = evalstack.pop();
				double b = evalstack.pop();
				evalstack.push(b / a);
			}
		}
	}

	double result = evalstack.pop();
	cout << "Value = " << result << endl;
}
