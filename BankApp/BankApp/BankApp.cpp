#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
  cout << "\n" << endl;
  cout << "Bank Account Application" << endl;
  cout << "========================" << endl;

  string name1;
  string name2;
  double balance1;
  double balance2;
  double deposit1;
  double deposit2;
  double withdrawal1;
  double withdrawal2;

  cout << "Welcome to YourBank\n";
  cout << "Please enter the account owner name: ";
  cin >> name1;
  cout << "Please enter the account balance: ";
  cin >> balance1;

  Account account1(name1, balance1);
  cout << "Hello, " << account1.getName() << "\nYour balance is $"
       << account1.getBalance() << endl;

  cout << "Please enter a deposit amount: ";
  cin >> deposit1;

  account1.deposit(deposit1);

  cout << "Please enter a withdrawal amount: ";
  cin >> withdrawal1;

  account1.withdraw(withdrawal1);

  cout << account1.getName() << ", your new balance is: $"
       << account1.getBalance() << endl;

  cout << "\nPlease enter the second account name: ";
  cin >> name2;

  Account account2(name2);

  if (account2.getBalance() == -1) {
    cout << "You have not entered your balance." << endl;
    cout << "Please enter the second account balance: ";
    cin >> balance2;

    account2.setBalance(balance2);
  }

  cout << "Thank you, " << account2.getName() << ". Your balance is $"
       << account2.getBalance() << endl;

  cout << "Please enter a deposit amount for the second account: ";
  cin >> deposit2;

  account2.deposit(deposit2);

  cout << "Please enter a withdrawal amount for the second account: ";
  cin >> withdrawal2;

  account2.withdraw(withdrawal2);

  cout << account2.getName() << ", your new balance is: $"
       << account2.getBalance() << endl;

  cout << "\n------------------------------------------" << endl;

  cout << "Thank you for choosing YourBank. Good-bye!" << endl;
};
