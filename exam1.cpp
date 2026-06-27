//using enumeration in C++ program
// #include<iostream>
// using namespace std;
// enum shape{circle,rectangle,triangle};
// int main(){
//     int code;
//     cout<<"Enter shape code: ";
//     cin>>code;
//     while(code>=circle&& code<=triangle){
//         switch(code)
//         {
//             case circle:cout<<"Circle is drawn";
//                         break;
//             case rectangle:cout<<"Rectangle is drawn";
//                             break;
//             case triangle: cout<<"Triangle is drawn";
//                             break;
//             default: cout<<"Enter valid shape code!";
//         }
//         cout<<endl<<"Enter shape code: ";
//         cin>>code;
//     }
//     cout<<"Bye!"<<endl;
// }
// practicing about manipulators
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
	int basic=950;
	int allowance=95;
	int total=1045;
	cout<<left<<setw(10)<<"Basic"<<right<<setw(10)<<basic<<endl
		<<left<<setw(10)<<"Allowance"<<right<<setw(10)<<allowance<<endl
		<<left<<setw(10)<<"Total"<<right<<setw(10)<<total<<endl;

	float amount;
	float value(float p,int n,float r=0.15);   //prototype
	void printline(char ch='*',int len=40);     //prototype
	printline();								//use default values for arguments
	
	amount=value(5000.00,5);   //default for 3rd argument
	cout<<endl<<"Final Value1 = "<<amount<<endl; 

	amount=value(1000.00,5,0.30);     //pass all arguments explicitly
	cout<<"Final Value2 = "<<amount<<endl;
	
	printline('=');		 //use default value for second argument		
	getch();
	return 0;
}
float value(float p, int n,float r)
{
	int year=1;
	float sum=p;
	
	while(year<=n){
		sum=sum*(1+r);
		year+=1;
	}
	return sum;
}
void printline(char ch, int len)
{
	for(int i=1;i<=len;i++){
		cout<<ch;
		
	}
}