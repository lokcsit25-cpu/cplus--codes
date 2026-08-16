/*
(1) Create a function template to swap 2 values. Using its template function, swap 2 integer,
floating point, and character values.*/
#include <iostream>
using namespace std;
class Swap {
    public:
        template <typename T>
        void swapValues(T &a, T &b) 
        {
            T temp = a;
            a = b;
            b = temp;
        }

};
int main() {
    Swap s;
    int inum1,inum2;
    float fnum1,fnum2;
    char ch1,ch2;

    cout << "Enter any two integer values: ";
    cin >> inum1 >> inum2;
   
    cout << "Enter any two floating point values: ";
    cin >> fnum1 >> fnum2;

    cout << "Enter any two characters: ";
    cin >> ch1 >> ch2;
    
    cout << endl << "Before swapping: " << endl;
    cout << endl << "Integer values: "<<"num1= " << inum1 << " & " << "num2= " << inum2 << endl;
    cout << "Floating point values: "<<"num1= " << fnum1 << " & " << "num2= " << fnum2 << endl;
    cout << "Character values: "<<"char1= " << ch1 << " & " << "char2= " << ch2 << endl;

    s.swapValues(inum1, inum2);
    s.swapValues(fnum1, fnum2);
    s.swapValues(ch1, ch2);

    cout << endl << "After swapping: " << endl;
    cout << endl <<"Integer values: " << "num1= " << inum1 << " & " << "num2= " << inum2 << endl;
    cout << "Floating point values: " << "num1= " << fnum1 << " & " << "num2= " << fnum2 << endl;
    cout << "Character values: " << "char1= " << ch1 << " & " << "char2= " << ch2 << endl;

    return 0;
}