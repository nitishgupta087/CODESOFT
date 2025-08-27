#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Basic Calculator" << endl;
    cout << "-----------------" << endl;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Choose operation
    cout << "Choose operation (+, -, *, /): ";
    cin >> op;

    // Perform operation
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero." << endl;
                return 1; // Exit with error code
            }
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
