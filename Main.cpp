#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>





using std::cin;
using std::cout;
using std::string;


double Balanceee(double amount) {
    return amount;
}
double addmoney() {
    double moneyadded = 0;
    cout << "Enter amount to be deposited : ";
    cin >> moneyadded;
    return moneyadded;
}
double takemoney() {
    double moneytook = 0;
    cout << "Enter amount to be withdrawn : ";
    cin >> moneytook;
    return moneytook;
}


int main() {

    double balance = 0;
    int choice;
    do {
        cout << "\nEnter your choice : \n\n";
        cout << "1. Show Balance \n";
        cout << "2. Deposit Money \n";
        cout << "3. Withdraw Money \n";
        cout << "4. Exit \n\n";
        cin >> choice;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
            cout << "\n---------------------------------------\n";
            cout << "Your balance is $" << Balanceee(balance) << "\n";
            cout << "---------------------------------------\n";

            break;
        case 2:
            balance += addmoney();
            cout << "\n---------------------------------------\n";
            cout << "Your balance is $" << balance << "\n";
            cout << "---------------------------------------\n";
            break;
        case 3:
            balance -= takemoney();
            cout << "\n---------------------------------------\n";
            cout << "Your balance is $" << balance << "\n";
            cout << "---------------------------------------\n";
            break;
        case 4:
            cout << "\n---------------------------------------\n";
            cout << "Thanks for visiting my command line BANK !";
            cout << "\n---------------------------------------\n";
            break;
        default:
            cout << "\nChoose a valid option from below !\n";
            break;
        }
    } while (choice != 4);


    return 0;
}