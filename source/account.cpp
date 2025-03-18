//
//  account.cpp
//  Playing
//
//  Created by PirloSasa on 27.12.23.
//

#include <iostream>
#include "account.hpp"

unsigned long Account::s_accountGenerator{1000};

Account::Account(const std::string &name, double balance):m_name(name),m_balance(balance) {
    std::cout << "Account Constructor." << std::endl;
    m_bankAccount = ++s_accountGenerator;
}

Account::~Account(){
    std::cout << "~Account()" << std::endl;
}
double Account::getBalance()const{
    return m_balance;
}

std::string Account::getName() const{
    return m_name;
}

unsigned long Account::getAccountNumber()const{
    return m_bankAccount;
}
float Account::getIntrRate()const{
    return 0.05;
}
void Account::withdraw(double amount){
    m_balance -= amount;
}

void Account::deposite(double amount){
    m_balance += amount;
}

void Account::accumilateInterest(){
    m_balance *= (m_balance*0.05);
}
