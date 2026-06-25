/*(1) Write a program to simulate banking transaction of 3 users. 
The program must be menudriven. Include the following operations in the menu:
1. Deposit
2. Withdraw
3. Display Balance
4. Display Total Operations
5. Exit
Use a static member function to display total number of operations (option 4)
performed through the application.*/
#include<iostream>
using namespace std;
class Bank{
    private:
        int accno;
        string name;
        float balance;
        static int count; // static member to keep track of total operations
    public:
        // Constructor to initialize account details
        // Bank(int acc, string n, float bal) {
        //     accno = acc;
        //     name = n;
        //     balance = bal;
        //     count++; // Increment operation count for each new account
        // }
        void setAccountDetails() {
            cout<< "Enter Account Number: ";
            cin >> accno;
            cout << "Enter Name of Account Holder: ";
            cin >> name;
            cout << "Enter Initial Balance: ";
            cin >> balance;
        }
        // Function to deposit amount
        void deposit(float amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
                count++; // Increment operation count for deposit
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        }

        // Function to withdraw amount
        void withdraw(float amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
                count++; // Increment operation count for withdrawal
            } else {
                cout << "Invalid withdrawal amount!" << endl;
            }
        }

        // Function to display current balance
        void displayBalance() {
            cout << "Current Balance: " << balance << endl;
        }

        // Static function to display total operations performed
        static void displayTotalOperations() {
            cout << "Total Operations Performed: " << count << endl;
        }
};
int Bank::count = 0; // Initialize static member
int main() {
    Bank user[3];//(0, "", 0.0); // Array of 3 Bank objects
    for(int i=0;i<3;i++){
        cout<<"Enter details for user "<<i+1<<endl;
        user[i].setAccountDetails();
    }
    


    int choice;
    do {
        cout << "\nBanking Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Display Total Operations\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int userChoice;
                float amount;
                cout << "Select User (1-3): ";
                cin >> userChoice;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (userChoice == 1) user[0].deposit(amount);
                else if (userChoice == 2) user[1].deposit(amount);
                else if (userChoice == 3) user[2].deposit(amount);
                else cout << "Invalid user selection!" << endl;
                user[userChoice-1].displayBalance();
                break;
            }
            case 2: {
                int userChoice;
                float amount;
                cout << "Select User (1-3): ";
                cin >> userChoice;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (userChoice == 1) user[0].withdraw(amount);
                else if (userChoice == 2) user[1].withdraw(amount);
                else if (userChoice == 3) user[2].withdraw(amount);
                else cout << "Invalid user selection!" << endl; 
                user[userChoice-1].displayBalance();
                break;
            }
            case 3: {
                int userChoice;
                cout << "Select User (1-3): ";
                cin >> userChoice;
                if (userChoice == 1) user[0].displayBalance();
                else if (userChoice == 2) user[1].displayBalance();
                else if (userChoice == 3) user[2].displayBalance();
                else cout << "Invalid user selection!" << endl;
                break;
            }
            case 4:
                Bank::displayTotalOperations();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}
