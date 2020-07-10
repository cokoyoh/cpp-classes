#include <iostream>
#include <string>
#include "Account.h"

int main() {
    Account account;

    cout << "Initial account name is: " << account.getName();

    cout << "\nPlease enter the account name: ";
    string accountName;
    getline(cin, accountName);
    account.setName(accountName);

    cout << "Name in object account is: " << account.getName() << endl;
}
