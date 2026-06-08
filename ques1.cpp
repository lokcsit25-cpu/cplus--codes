/* (1) There is a vacancy for a seasonal job. Applicants are qualified to apply for the job only if they
can lift at least 50 kg weight and are between 18 to 24 yrs of age. However, if the applicants
have more than 4 yrs of experience in the field, they can qualify even if they can lift just 35 kg
and are over 24 yrs of age. Write a program in C++ to input the information of applicants and
check if they meet the required credentials for the job.
 */
#include<iostream>
using namespace std;
int main()
{
	float weight;
	cout<<"Enter lifted weight of applicant: ";
	cin>>weight;
	int age;
	cout<<"Enter age of applicant: ";
	cin>>age;
	float experience;
	cout<<"Enter experience of applicant: ";
	cin>>experience;
	if(age>=18&&age<=24&&weight>=50)
	{
			cout<<"Applicant meet the required credentials!";
	}
	else if(experience >= 4 && weight>=35&& age>=18 )
	{
		cout<<"Applicant meet the required credentials!";
	}
	else
	{
		cout<<"Applicant does not meet the required credentials";
	}
return 0;	
}