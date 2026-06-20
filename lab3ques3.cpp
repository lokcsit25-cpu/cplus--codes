/*Create a class for and account holder with data members as accountNo,
 accountHolderName and balance.create two methods to store and retrieve 
 these values for 3 customers*/
#include <iostream>
#include <iomanip>
using namespace std;

class Account {
private:
    int accountNo;
    char accountHolderName[50];
    float balance;

public:
    // Function declarations
    void store();   // will take input
    void retrieve();   // will display output
};

// Setter definition (takes input directly)
void Account::store() {
    cout << "Account Number: ";
    cin >> accountNo;
    cin.ignore(); // ignore newline
    cout << "Account Holder Name: ";
    cin.getline(accountHolderName,50);
    cout << "Balance: ";
    cin >> balance;
}

// Getter definition (displays output)
void Account::retrieve() {
    cout << "Account Number: " << accountNo << endl;
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << fixed << setprecision(2);
    cout << "Balance: " << balance << endl; 
}

int main() {
    Account customers[3];

    // Input handled inside setData()
    for (int i = 0; i < 3; i++) {
        cout << "Enter details of customer " << i + 1 << ":"<<endl;
        customers[i].store();
    }

    // Output handled inside getData()
    cout << "\nCustomer Details:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nCustomer " << i + 1 << ":\n";
        customers[i].retrieve();
    }

    return 0;
}
