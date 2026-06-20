//modify the program of quesetion 1 to display only the names of department heads
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
    // Displaying only the names of department heads
    cout<<"\nDepartment Heads:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(p.dept[i].emp[j].isHead)
            {
                cout<<"Department: "<<p.dept[i].dname<<", Head: "<<p.dept[i].emp[j].name<<endl;
            }
        }
    }
    return 0;
}