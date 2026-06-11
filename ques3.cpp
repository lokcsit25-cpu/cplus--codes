/* Write a program that prompts a student to enter the marks they obtained in Object
Oriented Programming. Output the corresponding grade they obtained. (0-59 = F, 60-69 = D,
70-79 = C, 80-89 = B, 90-100 = A)*/
#include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter your marks obtained in OOP: ";
    cin>>marks;
    if(marks>=0 && marks<=59)
    {
        cout<<"Your Grade is F"<<endl;
    }
    else if(marks>=60 && marks<=69)
    {
        cout<<"Your grade is D"<<endl;
    }
    else if(marks>=70 && marks<=79)
    {
        cout<<"Your grade is C"<<endl;
    }
    else if(marks>=80 && marks<=89)
    {
        cout<<"Your grade is B"<<endl;
    }
    else
    {
        cout<<"Your grade is A"<<endl;
    }
    return 0;
}