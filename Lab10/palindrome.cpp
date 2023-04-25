#include <iostream>
#include<string>

using namespace std;

bool isPal(const string &str, int startIndex, int endIndex)
{
    if (startIndex >= endIndex - 1) 
        return true;
    else if (str[startIndex] != str[endIndex - 1])
        return false;
    else 
        return isPal(str, startIndex + 1, endIndex - 1);
}

bool isNotPal(const string &str, int startIndex, int endIndex) {
    
}

int main()
{
    bool result;
    string str;
    cout << "Enter a string, no spaces and all lower case: ";
    cin >> str;
    result = isPal(str, 0, str.length());
    if (result) 
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;
        
    return 0;
}