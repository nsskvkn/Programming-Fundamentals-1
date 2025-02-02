#include <iostream>
#include <stack>
#include <cctype>
#include <string>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int performOperation(char op, int a, int b) {
    if (op == '/') {
        if (b == 0) {
            cout << "Error: division by zero." << endl;
            exit(EXIT_FAILURE);
        }
        return a / b;
    }
    else if (op == '+') {
        return a + b;
    }
    else if (op == '-') {
        return a - b;
    }
    else if (op == '*') {
        return a * b;
    }

    cout << "Error: unsupported operator " << op << endl;
    exit(EXIT_FAILURE);
}

void applyOperation(stack<int>& values, stack<char>& ops) {
    int b = values.top();
    values.pop();
    int a = values.top();
    values.pop();
    values.push(performOperation(ops.top(), a, b));
    ops.pop();
}

int evaluateInfix(const string& expr) {
    stack<int> values;
    stack<char> ops;

    for (int i = 0; i < expr.length(); i++) {
        if (isdigit(expr[i])) {
            int value = 0;
            while (i < expr.length() && isdigit(expr[i])) {
                value = value * 10 + (expr[i++] - '0');
            }
            values.push(value);
            i--;
        } else if (strchr("+-*/", expr[i])) {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expr[i])) {
                applyOperation(values, ops);
            }
            ops.push(expr[i]);
        }
    }
    while (!ops.empty()) {
        applyOperation(values, ops);
    }
    return values.top();
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;
    cout << "Result: " << evaluateInfix(expression) << endl;
    return 0;
}
