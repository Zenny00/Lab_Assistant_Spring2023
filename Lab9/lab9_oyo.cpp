#include <iostream>
#include <sstream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    // string input = "234 32 + 7 *";
    // Must have spaces between tokens.
    string input;
    cout << "Enter expression: ";
    getline(cin, input);
    bool BalDelim = true;
    stack<char> parenstack;
    for (unsigned int i = 0; i < input.length(); i++)
    {
        char token = input[i];
        if (token == '(' || token == '[' || token == '{')
            parenstack.push(token);
        else if (token == ')')
        {
            if (parenstack.empty())
                BalDelim = false;
            else
            {
                char a = parenstack.top();
                if (a != '(')
                    BalDelim = false;
                else
                    parenstack.pop();
            }
        }
        else if (token == ']')
        {
            if (parenstack.empty())
                BalDelim = false;
            else
            {
                char a = parenstack.top();
                if (a != '[')
                    BalDelim = false;
                else
                    parenstack.pop();
            }
        }
        else if (token == '}')
        {
            if (parenstack.empty())
                BalDelim = false;
            else
            {
                char a = parenstack.top();
                if (a != '{')
                    BalDelim = false;
                else
                    parenstack.pop();
            }
        }
    }
    if (!parenstack.empty())
        BalDelim = false;
    if (BalDelim)
        cout << "Delimiters are balanced." << endl;
    else
        cout << "Delimiters are not balanced." << endl;
}