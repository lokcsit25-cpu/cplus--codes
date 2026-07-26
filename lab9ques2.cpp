//(2) Write an object oriented program to overload the Pointer-To-Member (->) operator.
#include<iostream>
using namespace std;
class Name{
    private:
        string name;
    public:
        void setValue(){
            cout<<"Enter your name: ";
            getline(cin>>ws,name);
        }
        void display(){
            cout<<"Your Name is: "<<name<<endl;
        }
        Name* operator->(){
            return this;
        }
};
int main(){
    Name n;
    n.setValue();
    n->display();
    return 0;
}