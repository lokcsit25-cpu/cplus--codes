/*Create a structure for a pharmaceutical company having three departments. Each
department can have a maximum of 5 employees, out of which one is a department head.
Input as well as display the information of the departments’ employees.*/
#include<iostream>
using namespace std;
struct employee{
    char name[50];
    float salary;
    int idno;
    bool isHead;
};
struct department{
    char dname[50];
    char dlocation[50];
    struct employee emp[5];
};
struct pharmacy{
    char pname[50];
    char plocation[50];
    struct department dept[3];
};
int main(){
    struct pharmacy p;
    cout<<"Enter the name of the pharmaceutical company: ";
    cin.getline(p.pname,50);
    cout<<"Enter the location of the pharmaceutical company: ";
    cin.getline(p.plocation,50);
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the name of department "<<i+1<<": ";
        cin.getline(p.dept[i].dname,50);
        cout<<"Enter the location of department "<<i+1<<": ";
        cin.getline(p.dept[i].dlocation,50);
        for(int j=0;j<5;j++)
        {
            cout<<"Enter the name of employee "<<j+1<<" in department "<<i+1<<": ";
            cin.getline(p.dept[i].emp[j].name,50);
            cout<<"Enter the salary of employee "<<j+1<<" in department "<<i+1<<": ";
            cin>>p.dept[i].emp[j].salary;
            cout<<"Enter the ID number of employee "<<j+1<<" in department "<<i+1<<": ";
            cin>>p.dept[i].emp[j].idno;
            cout<<"Is employee "<<j+1<<" in department "<<i+1<<" a department head? (1 for yes, 0 for no): ";
            cin>>p.dept[i].emp[j].isHead;
            cin.ignore(); // to ignore the newline character after reading isHead
        }
    }
    // Displaying the information
    cout<<"\nPharmaceutical Company: "<<p.pname<<"\nLocation: "<<p.plocation<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"\nDepartment "<<i+1<<": "<<p.dept[i].dname<<"\nLocation: "<<p.dept[i].dlocation<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"\nEmployee "<<j+1<<": "<<p.dept[i].emp[j].name<<"\nSalary: "<<p.dept[i].emp[j].salary<<"\nID Number: "<<p.dept[i].emp[j].idno<<"\nDepartment Head: "<<(p.dept[i].emp[j].isHead ? "Yes" : "No")<<endl;
        }
    }
    return 0;
}

