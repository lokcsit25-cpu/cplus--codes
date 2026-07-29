//(1) Write a program that overloads the binary arithmetic '/' operator using a friend function.
#include <iostream>
using namespace std;

class Division {
private:
    float num;
public:
    void setValue() {
        cout << "Enter any number: ";
        cin >> num;
    }

    friend float operator/(Division d1, Division d2){
        if (d2.num == 0) {
            cout << "Division by zero is not possible!" << endl;
            return 0; 
        }
        else {
            return d1.num / d2.num;
        }
    }
};
int main() {
    Division d1, d2;
    d1.setValue();
    d2.setValue();
    float result = d1 / d2;
    cout << "Result of division of given two numbers: " << result << endl;
    return 0;
}
