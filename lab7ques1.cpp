#include<iostream>
using namespace std;

class Second;  // Forward declaration

class First {
private:
    int num1;
public:
    void getnum1() {
        cout << "Enter first number: ";
        cin >> num1;
    }
    friend void sum(First f, Second s); 
};

class Second {
private:
    int num2;
public:
    void getnum2() {
        cout << "Enter second number: ";
        cin >> num2;
    }
    friend void sum(First f, Second s); 
};

void sum(First f, Second s) {
    cout << "Sum of two numbers of two classes: " << f.num1 + s.num2 << endl;
}

int main() {
    First f;
    Second s;
    f.getnum1();
    s.getnum2();
    sum(f, s);
    return 0;
}
