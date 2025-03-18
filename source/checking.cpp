//
//  checking.cpp
//  Playing
//
//  Created by PirloSasa on 8/5/22.
//  Copyright © 2022 Mustafa. All rights reserved.
//

#include "checking.hpp"

/*Checking::Checking(const std::string &name, double balance):Account(name,balance){
    std::cout << "Checking().\n";
}*/

Checking::~Checking(){
    std::cout << "~Checking().\n";
}

void
Checking::withdraw(double amount){
    if(m_balance - amount <= 50){
        std::cout << "Invalid amount.\n";
    }else{
        Account::withdraw(amount);
    }
}
