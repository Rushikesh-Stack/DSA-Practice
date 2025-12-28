#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if a pair of brackets match
bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

// Function to check if the expression has balanced brackets
bool isBalanced(string exp) {
    stack<char> s;

    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty() || !isMatching(s.top(), ch)) {
                return false;
            }
            s.pop();
        }
    }

    return s.empty();
}

int main() {
    string input;
    cout << "Enter bracket expression: ";
    cin >> input;

    if (isBalanced(input)) {
        cout << "Balanced brackets\n";
    } else {
        cout << "Unbalanced brackets\n";
    }

    return 0;
}