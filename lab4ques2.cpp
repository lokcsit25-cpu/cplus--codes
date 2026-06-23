/*Create a constructor to initiate any private data member. Later overload it 
to set different type of data member. Your program must also include a 
destructor*/
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int age;
    string name;
    string address;

public:
    // Constructor 1: Initialize integer data member
    Student(int a) {
        age = a;
        name = "Not Assigned";
        address = "Not Assigned";
        cout << "Constructor 1 called" << endl;
    }

    // Constructor 2: Initialize string data member
    Student(string n) {
        age = 0;
        name = n;
        address = "Not Assigned";
        cout << "Constructor 2 called" << endl;
    }

    // Constructor 3: Initialize all data members
    Student(int ag, string n, string addr = "Not Assigned") {
        age = ag;
        name = n;
        address = addr;
        cout << "Constructor 3 called" << endl;
    }

    // Proper setters
    void setAge(int a) {
        age = a;
        cout << "Age updated to " << age << endl;
    }

    void setName(string n) {
        name = n;
        cout << "Name updated to " << name << endl;
    }

    void setAddress(string addr) {
        address = addr;
        cout << "Address updated to " << address << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Address: " << address << endl; 
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for student: " << name << endl;
    }
};

int main() {
    // Using constructor with age
    Student s1(20);
    s1.display();

    cout << endl;

    // Using constructor with name
    Student s2("Lokraj");
    s2.display();

    cout << endl;

    // Using constructor with all data members
    Student s3(22, "Syam", "Kathmandu");
    s3.display();

    cout << endl;

    // Demonstrating setters
    s1.setName("Aanchal");
    s1.setAge(25);
    s1.setAddress("Mahendranagar");
    s1.display();

    cout << endl;

    return 0;
}

