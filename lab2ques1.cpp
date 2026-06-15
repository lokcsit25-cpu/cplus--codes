/* Create a function that calculates the product of 3 numbers entered by the user, regardless
of the number entered being integer or floating point. Print the result as output.*/
#include<iostream>
using namespace std;
void calculate(int a,int b, int c);
void calculate(float a,float b, float c);
int main(){
    
    int choice;
    cout << "-------------Menu-------------" << endl;
    cout << "1) product of three integers "<<endl<<"2) product of three floating point numbers"<<endl;
    cout<<"Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1: {
            int a,b,c;
            cout << "Enter three integers: ";
            cin >> a >> b >> c;
            calculate(a,b,c);
            break;
        }
        case 2: {
            float a,b,c;
            cout << "Enter three floating point numbers: ";
            cin >> a >> b >> c;
            calculate(a,b,c);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}

void calculate(int a,int b, int c){
    int product = a * b * c;
    cout << "Product of the three integers: " << product << endl;
}

void calculate(float a,float b, float c){
    float product = a * b * c;
    cout << "Product of the three floating point numbers: " << product << endl;
}

