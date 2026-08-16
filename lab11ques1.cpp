//(1) Write a program to demonstrate a catch block which catches all exceptions.
#include<iostream>
using namespace std;
void divide(int a, int b) {
    if(b==0) {
        throw "Division by zero is not possible!";
    } else {
        cout << "Result of Division= " << a / b << endl;
    }
}
void dispAge(int age) {
    if(age < 0) {
        throw age;
    } else {
        cout << "Age: " << age << endl;
    }
}
int main(){
    int num1, num2, age;
    cout << "Enter two numbers to divide: ";
    cin >> num1 >> num2;
    cout<<"Enter your age: ";
    cin >> age;
    try {
        divide(num1, num2);
        dispAge(age);
    } catch(...){
        cout << "An error occurred!" << endl;
    }
    return 0;
}