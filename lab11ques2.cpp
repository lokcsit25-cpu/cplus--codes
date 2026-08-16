//(2) Write a program using exception handling in which an object type is thrown
#include <iostream>
using namespace std;

class Exception {
    private:
        float marks;
    public:
        Exception(float m) {
            marks = m;
        }
        float getMarks() {
            return marks;
        }
        void checkMarks(float marks) {
            if(marks < 0 || marks > 100) {
                throw Exception(marks);   
            } else {
                cout << "Your Marks: " << marks << endl;
            }
        }
};    

int main() {
    float marks;
    cout<< "Enter your marks: ";
    cin >> marks;
    try {
        Exception e(0);
        e.checkMarks(marks);
    } catch(Exception &e) {
        cout << e.getMarks() << " is invalid marks!" << endl;
    }
    return 0;
}
