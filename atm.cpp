#include <iostream>

using namespace std;

void showMenu() {
    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main() {
   //check balance, deposit, withdraw, show menu

    int option;
    double balance = 21485598.79;

    do {
    showMenu();

    cout << "Choose an option: " << endl;
    cin >> option;
    system("clear");
    switch(option) {
    case 1:
        cout << "Your balance is:" << balance << "$" << endl;
        break;
    case 2:
        cout << "How much do you want to deposit: " << endl;
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
     break;
    case 3:
        cout << "How much do you want to withdraw: " << endl;
        double withdrawAmount;
        cin >> withdrawAmount;
            if (withdrawAmount <= balance)
              balance -= withdrawAmount;
            else
            cout << "Not enough balance!!" << endl;
     break;
     }
     } while (option != 4);
     system("pause > 0");
    return 0;
}
