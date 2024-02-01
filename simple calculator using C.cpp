#include <iostream>

using namespace std;

int main() {
    float firstNumber, secondNumber, result;
    char operation;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = firstNumber + secondNumber;
            cout << firstNumber << " plus " << secondNumber << " equals " << result << endl;
            break;
        case '-':
            result = firstNumber - secondNumber;
            cout << firstNumber << " minus " << secondNumber << " equals " << result << endl;
            break;
        case '*':
            result = firstNumber * secondNumber;
            cout << firstNumber << " multiplied by " << secondNumber << " equals " << result << endl;
            break;
        case '/':
            if (secondNumber != 0) {
                result = firstNumber / secondNumber;
                cout << firstNumber << " divided by " << secondNumber << " equals " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please choose +, -, *, or /." << endl;
            break;
    }

    return 0;
}

