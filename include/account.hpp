//
//  account.hpp
//  Playing
//
//  Created by PirloSasa on 8/5/22.
//  Copyright © 2022 Mustafa. All rights reserved.
//

#ifndef account_hpp
#define account_hpp

#include <iostream>
#include <stdio.h>

class Account{
private:
    std::string m_name;
    unsigned long m_bankAccount;
    static unsigned long s_accountGenerator;

public:
    Account(const std::string &name, double balance);
    ~Account();
    
    double getBalance()const;
    std::string getName()const;
    virtual float getIntrRate()const;
    unsigned long getAccountNumber()const;
    
    virtual void withdraw(double amount);
    virtual void deposite(double amount);
    
    virtual void accumilateInterest();

protected:
    double m_balance;
};


#endif /* account_hpp */
