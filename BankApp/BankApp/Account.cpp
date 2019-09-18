#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

Account::Account(string accountName, double accountBalance) {
  name = accountName;
  balance = accountBalance;
}

Account::Account(string accountName) {
  name = accountName;
}

void Account::setBalance(double amt) {
  balance = amt;
}

void Account::withdraw(double amt) {
  if (balance <= 0) {
    cout << "You do not have enough balance" << endl;
    return;
  }
  if (balance < amt) {
    cout << "You do not have enough balance" << endl;
    return;
  }
  balance = balance - amt;
  cout << "Withdrawing $" << amt << endl;
}

void Account::deposit(double amt) {
  if (amt > 1000) {
    cout << "You cannot deposit more than $1000" << endl;
    return;
  }
  balance = balance + amt;
  cout << "Depositing $" << amt << endl;
}

string Account::getName() {
  return name;
}

double Account::getBalance() {
  return balance;
}
