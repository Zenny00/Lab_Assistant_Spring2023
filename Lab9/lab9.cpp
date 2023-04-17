#include <iostream>
#include <sstream>
#include <stack>
#include <queue>

using namespace std;

int main() {
// string input = "234 32 + 7 *";
// Must have spaces between tokens.

	string input;
	cout << "Enter a postfix expression: ";
	getline(cin, input);

	queue<string> tokens;
	stringstream inputstream(input);
	string token;

	// Tokenizing w.r.t. space ' '
	while (getline(inputstream, token, ' ')) {
		tokens.push(token);
	}

	stack<double> evalstack;
	while (tokens.size() > 0) {
		string token = tokens.front();
		tokens.pop();
		if (token != "") {
			char c = token[0];
			if (c >= '0' && c <= '9') {
				double val = atof(token.c_str());
				evalstack.push(val);
			} else if (token == "+") {
				double a = evalstack.top();
				evalstack.pop();
				double b = evalstack.top();
				evalstack.pop();
				evalstack.push(b + a);
			} else if (token == "-") {
				double a = evalstack.top();
				evalstack.pop();
				double b = evalstack.top();
				evalstack.pop();
				evalstack.push(b - a);
			} else if (token == "*") {
				double a = evalstack.top();
				evalstack.pop();
				double b = evalstack.top();
				evalstack.pop();
				evalstack.push(b * a);
			} else if (token == "/") {
				double a = evalstack.top();
				evalstack.pop();
				double b = evalstack.top();
				evalstack.pop();
				evalstack.push(b / a);
			}
		}
	}

	double result = evalstack.top();
	cout << "Value = " << result << endl;
}


