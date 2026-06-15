/* Create a function that calculates the product of 3 numbers entered by the user, regardless
of the number entered being integer or floating point. Print the result as output.*/
#include<iostream>
using namespace std;
float product(float a, float b, float c){
    return a*b*c;
}
int main(){
    float num1,num2,num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    float ans=product(num1,num2,num3);
    cout<<"Product of three numbers: "<<ans<<endl;
}

