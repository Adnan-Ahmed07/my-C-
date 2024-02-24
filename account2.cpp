#include <iostream>
#include <string>
using namespace std;

class account {
private:
    double balance;
    string sname;

public:
    // Constructor
    account(double amount = 10000, string name = "") : balance(amount), sname(name) {
        cout << "Account Holder Name: " << sname << endl;
        cout << "Initial balance: " << balance << endl;
    }

    // Destructor
    ~account() {
        cout << "Object is deleted\n";
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    account adnan(5000, "Esteak Ahmed Adnan");
    adnan.deposit(1000);
    adnan.withdraw(5000);
    cout << "Current balance: " << adnan.getBalance() << endl;
    cout << "\n-----------------------\n\n";

    account adnan2(4000, "Adnan Ahmed");
    adnan2.deposit(10000);
    adnan2.withdraw(3000);
    cout << "Current balance: " << adnan2.getBalance() << endl;
    cout << "\n-----------------------\n\n";

    account adnan3(50000, "Esha Ahmed");
    adnan3.deposit(10000);
    adnan3.withdraw(40000);
    cout << "Current balance: " << adnan3.getBalance() << endl;

    account adnan4;
    cout << endl;

    return 0;
}
