/* Write a program in C++ for addition and subtraction of two complex numbers. Show the
values of the original number as well as sum and difference. [Use class] */
#include <iostream>
#include <cmath>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else    
        cout << real << " - " << abs(imag) << "i" << endl;
    }
    Complex addComplex(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
    Complex subComplex(Complex c) {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }
};
int main() {
    Complex c1, c2, sum, difference;
    cout << "Enter first complex number:" << endl;
    c1.input();
    cout <<endl<< "Enter second complex number:" << endl;
    c2.input();

    sum = c1.addComplex(c2);
    difference = c1.subComplex(c2);

    cout <<endl<< "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout <<endl<< "Sum of two complex numbers: ";
    sum.display();
    cout << "Difference of two complex numbers: ";
    difference.display();

    return 0;
}

