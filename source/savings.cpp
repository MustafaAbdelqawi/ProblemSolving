//
//  savings.cpp
//  Playing
//
//  Created by PirloSasa on 8/5/22.
//  Copyright © 2022 Mustafa. All rights reserved.
//

#include "savings.hpp"

Savings::Savings(const std::string &name, double balance, float intrRate): Account(name,balance), m_intrRate(intrRate){
    std::cout << "Savings()\n";
}

Savings::~Savings(){
    std::cout << "~Savings()\n";
}

float
Savings::getIntrRate()const{
    return this->m_intrRate;
}

void
Savings::accumilateInterest(){
    m_balance += (this->m_balance * m_intrRate);
}
