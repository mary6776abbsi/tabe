#include <iostream>
using namespace std;

// Recursive function for exponentiation
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

// Recursive function for factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Recursive function for Fibonacci series
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function for multiplication
int multiplication(int a, int b) {
    if (b == 0)
        return 0;
    else
        return a + multiplication(a, b - 1);
}

int main() {
    int choice;
    int base, exponent, n, a, b;

    while (true) {
        cout << "Choose a function to execute:" << endl;
        cout << "1. Exponentiation" << endl;
        cout << "2. Factorial" << endl;
        cout << "3. Fibonacci" << endl;
        cout << "4. Multiplication" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter exponent: ";
            cin >> exponent;
            cout << "Result: " << power(base, exponent) << endl;
            break;
        case 2:
            cout << "Enter a number: ";
            cin >> n;
            cout << "Result: " << factorial(n) << endl;
            break;
        case 3:
            cout << "Enter the value of 'n': ";
            cin >> n;
            cout << "Result: " << fibonacci(n) << endl;
            break;
        case 4:
            cout << "Enter two numbers to multiply: ";
            cin >> a >> b;
            cout << "Result: " << multiplication(a, b) << endl;
            break;
        case 0:
            cout << "Exiting program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
