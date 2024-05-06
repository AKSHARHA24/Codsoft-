#include<iostream>
using namespace std;

void add(double a1, double a2) {
    cout << "Addition of given two numbers: ";
    cout << a1 << " + " << a2 << " = " << a1 + a2 << endl;
}

void subtract(double s1, double s2) {
    cout << "Subtraction of given two numbers: ";
    cout << s1 << " - " << s2 << " = " << s1 - s2 << endl;
}

void division(double d1, double d2) {
    if (d2 == 0) {
        cout << "Error: Division by zero is undefined." << endl;
    } else {
        cout << "Division of given two numbers: ";
        cout << d1 << " / " << d2 << " = " << d1 / d2 << endl;
    }
}

void multiply(double m1, double m2) {
    cout << "Multiplication of given two numbers: ";
    cout << m1 << " * " << m2 << " = " << m1 * m2 << endl;
}

int main() {
    double num1, num2;
    char ch;
    char cont;
    
    do {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        cout << "Enter operator to perform a particular operation:" << endl;
        cout << " * For multiply " << endl;
        cout << " + For addition" << endl;
        cout << " - For subtraction" << endl;
        cout << " / For division" << endl;
        cout << "----------------------------------" << endl;
        cin >> ch;
        
        switch (ch) {
            case '+':
                add(num1, num2);
                break;
            case '-':
                subtract(num1, num2);
                break;
            case '*':
                multiply(num1, num2);
                break;
            case '/':
                division(num1, num2);
                break;
            default:
                cout << "Invalid operation selected." << endl;     
                break;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    return 0;
}