#include <iostream>
using namespace std;
class account // The account class
{
private:
    double balance;
    string sname;

public:
// Constructor
    account() {}
    // Destructor
    ~account()
    {
        cout << "Object is deleted\n";
    }
    // para Constructor
    account(double amount, string name)
    {
        sname = name;
        balance = amount;
        cout << "Account Holder Name: " << sname << endl;
        cout << "Initial balance: " << balance << endl;
    }
    // seter funtion
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }
     // setter funtion
    void withraw(double amount)
    {
        if (amount > 0 && amount < balance)
        {
            balance -= amount;
        }
    }
    // geter funtion
    double getdata()
    {
        return balance;
    }
};
int main()
{
    account adnan(5000, "Esteak Ahmed Adnan");

    adnan.deposit(1000);
    adnan.withraw(5000);
    cout << "Current balance: " << adnan.getdata() << endl;
    cout << "\n-----------------------\n\n";
    account adnan2(4000, "Adnan Ahmed");
    adnan2.deposit(10000);
    adnan2.withraw(3000);
    cout << "Current balance: " << adnan2.getdata() << endl;
    cout << "\n-----------------------\n\n";
    account adnan3(50000, "Esha Ahmed");
    adnan3.deposit(10000);
    adnan3.withraw(40000);
    cout << "Current balance: " << adnan3.getdata() << endl;
    account adnan4;
    cout << endl;

    return 0;
}