#include <iostream>

using namespace std;


double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main() {
    char operation;
    double num1, num2, result;

    
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    
    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    
    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operation. Please enter +, -, *, or /." << endl;
            return 1; 
    }

    
    cout << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Error: Division by zero." << endl;
        exit(1); 
    }
}
