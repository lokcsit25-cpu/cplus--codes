// to find nth index value of fibonacci series using iteration.
#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=1,next;
    cout<<"Enter the index of fibonacci series: ";
    cin>>n;
    if(n==0)
    {
        cout<<"The 0th index value: "<<n<<endl;
    }
    else if(n==1)
    {
        cout<<"The 1st index value: "<<n<<endl;
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            next=a+b;
            a=b;
            b=next;
        }
        cout<<n<<"th index value: "<<next<<endl;
    }
}