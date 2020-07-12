#include <iostream>
#include <string>
#include "Account.h"

int main() {
    Account account1{"John Doe", 50};
    Account account2{"Jane Doe", -7};

    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;

    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    cout << "\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: ";

    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

    cout << "\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();
}
