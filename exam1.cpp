//using enumeration in C++ program
#include<iostream>
using namespace std;
enum shape{circle,rectangle,triangle};
int main(){
    int code;
    cout<<"Enter shape code: ";
    cin>>code;
    while(code>=circle&& code<=triangle){
        switch(code)
        {
            case circle:cout<<"Circle is drawn";
                        break;
            case rectangle:cout<<"Rectangle is drawn";
                            break;
            case triangle: cout<<"Triangle is drawn";
                            break;
            default: cout<<"Enter valid shape code!";
        }
        cout<<endl<<"Enter shape code: ";
        cin>>code;
    }
    cout<<"Bye!"<<endl;
}