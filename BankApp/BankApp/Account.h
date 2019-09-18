#pragma once
#include <string>

class Account {
 public:
  Account(std::string accountName);
  Account(std::string, double accountBalance);
  void setBalance(double accountBalance);
  void withdraw(double amt);
  void deposit(double amt);
  std::string getName();
  double getBalance();

 private:
  std::string name;
  double balance = -1;
};
