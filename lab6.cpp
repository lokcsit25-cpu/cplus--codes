// //wap to read and display information about an author.An author is a person.(use private derivation).
// #include<iostream>
// using namespace std;
// class person{
//     private:
//         string awards;
//         string nationality;
//         string genre;
//     public:
//         void setter()
//         {
//             cout<<"Enter awards` of author: ";
//             getline(cin>>ws,awards);
//             cout<<"Enter nationality of author: ";
//             getline(cin>>ws,nationality);
//             cout<<"Enter genre of author: ";
//             getline(cin>>ws,genre);
//         }
//         void getter()
//         {
//             cout<<"Awards: "<<awards<<endl<<"Nationality: "<<nationality<<endl<<"Genre: "<<genre<<endl;
//         }
// };
// class author:private person{
// private:
//     string name;
//     int age;
// public:
//     void callsetter(){
//         setter();
//     }
//     void callgetter(){
//         getter();
//     }

//     void setdata()
//     {
//         cout<<"Enter name of author: ";
//         getline(cin>>ws,name);
//         cout<<"Enter age of author: ";
//         cin>>age;
//     }
//     void getdata()
//     {
//         cout<<endl<<"name:  "<<name<<endl<<"age: "<<age<<endl;
//     }
// };


    

// int main(){
//     author a;
//     a.callsetter();
//     a.setdata();
//     a.callgetter();
//     a.getdata();
//     return 0;
// }

//wap to demonstrate the following scenario of hierarchical inheritance.
//vehicle->car
//vehicle->Boat
//vehicle->Aeroplane

#include<iostream>
using namespace std;
class Vehicle{
    private:
    string type;
    string color;
    string medium_of_travel;
    public:
    void setter(){
    cout<<"Enter type of vehicle: ";
    getline(cin>>ws,type);
    cout<<"Enter color of vehicle: ";
    getline(cin>>ws,color);
    cout<<"Enter medium of travelling: ";
    getline(cin>>ws,medium_of_travel);
}
    void getter(){
    cout<<"type:"<<type<<endl<<" color:"<<color<<endl<<" medium of travel:"<<medium_of_travel<<endl<<endl;
    }
};
class car:public Vehicle{
    private:
    string cname;
    string brand;
    public:
    void input(){
        cout<<"Enter Car name: ";
        getline(cin>>ws,cname);
        cout<<"Enter Brand name: ";
        getline(cin>>ws,brand);
    }
    void output(){
        cout<<"car name:"<<cname<<endl<<" Brand name:"<<brand<<endl;
    }
};

class Boat:public Vehicle{
    private:
    string bname;
    string brand;
    public:
    void setdata(){
        cout<<"Enter Boat name: ";
        getline(cin>>ws,bname);
        cout<<"Enter Brand name: ";
        getline(cin>>ws,brand);
    }
    void getdata(){
        cout<<"Boat name:"<<bname<<endl<<" brand name:"<<brand<<endl;
    }
};

class Aeroplane:public Vehicle{
    private:
    string aeroname;
    string brand;
    public:
    void setadata1(){
        cout<<"Enter Aeroplane name: ";
        getline(cin>>ws,aeroname);
        cout<<"Enter Brand name: ";
        getline(cin>>ws,brand);
    }
    void getdata1(){
        cout<<"Aeroplane name:"<<aeroname<<endl<<" brand name:"<<brand<<endl;
    }
};

int main(){
    car c;
    c.input();
    c.setter();

    Boat b;
    b.setdata();
    b.setter();

    Aeroplane a;
    a.setadata1();
    a.setter();

    c.output();
    c.getter();

    b.getdata();
    b.getter();
 
    a.getdata1();
    a.getter();
    return 0;
}