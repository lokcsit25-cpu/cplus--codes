// wap to create a member function to reverse an  string array such that first is swap with last second with second last and so on
#include <iostream>
#include <string>
using namespace std;

class StringReverser {
private:
    string str;   // single string
    int size;    // size of the string
public:
    // Input function
    void inputString() {
        cout << "Enter a size of string to reverse: ";
        cin >> size;
        cout<< "Enter a string to reverse: ";
        cin.ignore();              // clear leftover newline from previous input
        getline(cin, str);         // read whole line including spaces
    }

    // Reverse function
    void reverseString() {
        for (int i = 0; i < size / 2; i++) {
            swap(str[i], str[size - 1 - i]);
        }
    }

    // Display function
    void displayString() const {
        cout << "String: " << str << endl;
    }
};

int main() {
    StringReverser s;
    s.inputString();

    cout << "Original ";
    s.displayString();
    s.reverseString();
    cout << "Reversed ";
    s.displayString();
    return 0;
}