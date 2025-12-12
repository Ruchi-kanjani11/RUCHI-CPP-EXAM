#include <iostream>

using namespace std;

class BankAccount
{
private:
    double AccountNumber, balance;
    string OwnerName;

public:
     void setData(int accNo, string name, double bal)
    {
        AccountNumber = accNo;
        OwnerName = name;
        balance = bal;
    }
    void credit(double amount)
    {
        balance += amount;
        cout << "Amount Credited Successfully"<<endl;
        cout << "Current Balance: " << balance << endl;
    }
    void debit(double amount)
    {
        if (amount <= balance)
        {
            cout << "Amount Debited Successfully"<<endl;
            balance -= amount;
            cout << "Current Balance: " << balance << endl;
        }
        else
        {
            cout << "Not Enough Balance!";
        }
    }
    void display()
    {
        cout << "Account's Number: " << AccountNumber << endl;
        cout << "Account Owner's Name: " << OwnerName << endl;
        cout << "Account's Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount acc;
    int accNo;
    string name;
    double bal, amount;
    int choice;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore(); 
    cout << "Enter Owner Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> bal;

    acc.setData(accNo, name, bal);

    do
    {
        cout <<endl<< "--- Menu ---"<<endl;
        cout << "1. Credit"<<endl;
        cout << "2. Debit"<<endl;
        cout << "3. Display Account"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter amount to be credited: ";
            cin >> amount;
            acc.credit(amount);
            break;

        case 2:
            cout << "Enter amount to be debited: ";
            cin >> amount;
            acc.debit(amount);
            break;

        case 3:
            acc.display();
            break;

        case 4:
            cout << "Exited Successfully!"<<endl;
            break;

        default:
            cout << "Invalid choice!"<<endl;
        }

    } while (choice != 4);

    return 0;
}