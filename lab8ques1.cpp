//(1) Make use of a friend class to access private data members of another class.
#include <iostream>
using namespace std;
class ClassB; // Forward declaration

class ClassA {
private:
    int privateData;

public:
    ClassA(int data) : privateData(data) {}

    // Declare ClassB as a friend class
    friend class ClassB;
};

class ClassB {
public:
    void accessData(ClassA& obj) {
        // Accessing private member of ClassA
        cout << "Private data of ClassA: " << obj.privateData << endl;
    }
};
int main(){
    ClassA a(42);
    ClassB b;
    b.accessData(a); // Accessing private data of ClassA through ClassB
    return 0;
}