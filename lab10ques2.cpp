/*(2) Write a program to demonstrate a class template for any suitable situation of your choice*/
#include <iostream>
using namespace std;

// Class template for Addition and Subtraction
template <class T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    void setter() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    
    void display() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }

    void getter() {
        cout << "Result of addition: " << add() << endl;
        cout << "Result of subtraction: " << subtract() << endl;
    }

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }
};

int main() {
    Calculator<int> intCalc(0, 0);
    cout << "For integer numbers:" << endl;
    intCalc.setter();
    intCalc.display();
    intCalc.getter();

    Calculator<float> floatCalc(0.0, 0.0);
    cout<< endl << "For floating point numbers:" << endl;
    floatCalc.setter();
    floatCalc.display();
    floatCalc.getter();

    return 0;
}

