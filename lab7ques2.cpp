//Write an object-oriented program for the following scenario. Make use of Virtual Class.
//ElectronicDevice->Printer
//ElectronicDevice->Scanner
//Printer->PhotocopyMachine
//Scanner->PhotocopyMachine
#include <iostream>
#include <string>
using namespace std;

class ElectronicDevice {
private:
    string deviceName;
    string brand;   
public:
    void readDevice() {
        cout << "Enter name of device: ";
        getline(cin >> ws, deviceName);
        cout << "Enter brand of device: ";
        getline(cin >> ws, brand);
    }
    void displayDevice() {
        cout << "Device Name: " << deviceName << endl;
        cout << "Brand: " << brand << endl;
    }
};

class Printer : virtual public ElectronicDevice {
protected:
    string printerType;
public:
    void readPrinter() {
        cout << "Enter type of printer: ";
        getline(cin >> ws, printerType);
    }
};

class Scanner : virtual public ElectronicDevice {
protected:
    string scannerType;
public:
    void readScanner() {
        cout << "Enter type of scanner: ";
        getline(cin >> ws, scannerType);
    }
};

class PhotocopyMachine : public Printer, public Scanner {
private:
    string photocopyType;
public:
    void readPhotocopyMachine() {
        // Only one call to readDevice() due to virtual inheritance
        readDevice();
        readPrinter();
        readScanner();
        cout << "Enter type of photocopy machine: ";
        getline(cin >> ws, photocopyType);
    }

    void displayPhotocopyMachine() {
        cout << endl << "Details of electronic device:" << endl;
        displayDevice();
        cout << "Type of photocopy machine: " << photocopyType << endl;
    }
};

int main() {
    PhotocopyMachine p;
    p.readPhotocopyMachine();
    p.displayPhotocopyMachine();
    return 0;
}

