//(1) Make use of a friend class to access private data members of another class.
#include <iostream>
using namespace std;

class First;   // Forward declaration
class Second;  // Forward declaration

// Friend class that can access private members of First and Second
class Sum {
public:
    void add(First f, Second s);
};

class First {
private:
    int num1;
public:
    // Setter
    void setNum1() {
        cout << "Enter first number: ";
        cin >> num1;
    }
    // Getter
    void getNum1() {
        cout << "First number is: " << num1 << endl;
    }
    // Declare Sum as a friend class
    friend class Sum;
};

class Second {
private:
    int num2;
public:
    // Setter
    void setNum2() {
        cout << "Enter second number: ";
        cin >> num2;
    }
    // Getter
    void getNum2() {
        cout << "Second number is: " << num2 << endl;
    }
    // Declare Sum as a friend class
    friend class Sum;
};

void Sum::add(First f, Second s) {
    cout << "Sum of two numbers of two classes using friend class: " << f.num1 + s.num2 << endl;
}

int main() {
    First f;
    Second s;
    Sum sumObj;
    
    f.setNum1();
    s.setNum2();

    f.getNum1();
    s.getNum2(); 

    sumObj.add(f, s);

    return 0;
}
