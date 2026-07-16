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
private:
    string printerType;
public:
    void readPrinter() {
        readDevice();
        cout << "Enter type of printer: ";
        getline(cin >> ws, printerType);
    }
    void displayPrinter() {
        displayDevice();
        cout << "Type of printer: " << printerType << endl;
    }
};

class Scanner : virtual public ElectronicDevice {
private:
    string scannerType;
public:
    void readScanner() {
        readDevice();
        cout << "Enter type of scanner: ";
        getline(cin >> ws, scannerType);
    }
    void displayScanner() {
        displayDevice();
        cout << "Type of scanner: " << scannerType << endl;
    }
};

class PhotocopyMachine : public Printer, public Scanner {
private:
    string photocopyType;
public:
    void readPhotocopyMachine() {
        // Only one call to readDevice() due to virtual inheritance
        readDevice();
        cout << "Enter type of printer: ";
        string printerType;
        getline(cin >> ws, printerType);

        cout << "Enter type of scanner: ";
        string scannerType;
        getline(cin >> ws, scannerType);

        cout << "Enter type of photocopy machine: ";
        getline(cin >> ws, photocopyType);
    }
    void displayPhotocopyMachine() {
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
