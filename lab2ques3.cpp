// Write a program to find the sum of 1 - (2^2/2!) + (3^2/3!) - (4^2/4!) + (5^2/5!) - ..... (n^2/n!). [Userecursion for the factorial part].
#include<iostream>
#include<math.h>
using namespace std;
int factorial(int n){
	if(n==0){
		return 1;
	}
	else if(n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int n,i;
	float pattern,sum=0;
	cout<<"Enter value of n: ";
	cin>>n;
	int factvalue;
 	for(i=1;i<=n;i++){
 		factvalue=factorial(i);
 		pattern=pow(-1,i+1)*pow(i,2)/factvalue;
        sum=sum+pattern;
	 }
	 cout<<"Sum: "<<sum<<endl;
}