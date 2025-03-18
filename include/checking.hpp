//
//  checking.hpp
//  Playing
//
//  Created by PirloSasa on 8/5/22.
//  Copyright © 2022 Mustafa. All rights reserved.
//

#ifndef checking_hpp
#define checking_hpp

#include <iostream>
#include <stdio.h>

#include "account.hpp"

class Checking:public Account{
public:
    //Since the Cheching class does not has any attributes to it's own and we only need to call the base class constructor, then we can avoid creating a constructor to Checking class and inherit the base class constructor using "using" keyword as the below statement.
    //"using Account::Accout" tells the compiler that the child class want to inherit all the constructors of the base class.
    using Account::Account;
    //Checking(const std::string &name, double balance);
    ~Checking();
    void withdraw(double amount);
};

#endif /* checking_hpp */
