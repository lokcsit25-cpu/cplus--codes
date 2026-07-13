//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//private:
//    string name;
//    int age;
//
//public:
//    void readPerson() {
//        cout << "Enter name of the person: ";
//        getline(cin >> ws, name);   
//        cout << "Enter age of the person: ";
//        cin >> age;
//    }
//
//    void displayPerson() {
//        cout << "Name: " << name << endl;
//        cout << "Age: " << age << endl;
//    }
//};
//
//class Author : private Person {
//private:
//    string nationality;
//    string genre;
//
//public:
//    void readAuthor() {
//        readPerson();
//        cout << "Enter nationality: ";
//        getline(cin >> ws, nationality);  
//        cout << "Enter genre: ";
//        getline(cin >> ws, genre);        
//    }
//
//    void displayAuthor() {
//        displayPerson();
//        cout << "Nationality: " << nationality << endl;
//        cout << "Genre: " << genre << endl;
//    }
//};
//
//int main() {
//    Author a;
//    cout << "Enter author information:\n";
//    a.readAuthor();
//
//    cout << "\nAuthor details:\n";
//    a.displayAuthor();
//
//    return 0;
//}

//wap to demonstrate the following scenario of hierarchical inheritance.
//vehicle->car
//vehicle->Boat
//vehicle->Aeroplane
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int speed;

public:
    void readVehicle() {
        cout << "Enter brand: ";
        getline(cin >> ws, brand);
        cout << "Enter speed (km/h): ";
        cin >> speed;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived class Car
class Car : public Vehicle {
private:
    string carName;

public:
    void readCar() {
        readVehicle();
        cout << "Enter car name: ";
        getline(cin >> ws, carName);
    }

    void displayCar() {
        displayVehicle();
        cout << "Car Name: " << carName << endl;
    }
};

// Derived class Boat
class Boat : public Vehicle {
private:
    string boatName;

public:
    void readBoat() {
        readVehicle();
        cout << "Enter boat name: ";
        getline(cin >> ws, boatName);
    }

    void displayBoat() {
        displayVehicle();
        cout << "Boat Name: " << boatName << endl;
    }
};

// Derived class Aeroplane
class Aeroplane : public Vehicle {
private:
    string planeName;

public:
    void readAeroplane() {
        readVehicle();
        cout << "Enter aeroplane name: ";
        getline(cin >> ws, planeName);
    }

    void displayAeroplane() {
        displayVehicle();
        cout << "Aeroplane Name: " << planeName << endl;
    }
};

int main() {
    Car c;
    Boat b;
    Aeroplane a;

    cout << "Enter Car Information: "<<endl;
    c.readCar();
    cout <<endl<< "Enter Boat Information: "<<endl;
    b.readBoat();
    cout <<endl<< "Enter Aeroplane Information: "<<endl;
    a.readAeroplane();
    
    cout <<endl<< "Car Details: "<<endl;
    c.displayCar();
    cout <<endl<< "Boat Details: ";
    b.displayBoat();
    cout <<endl<< "Aeroplane Details: ";
    a.displayAeroplane();

    return 0;
}


