//
//  savings.hpp
//  Playing
//
//  Created by PirloSasa on 8/5/22.
//  Copyright © 2022 Mustafa. All rights reserved.
//

#ifndef savings_hpp
#define savings_hpp

#include <stdio.h>
#include "account.hpp"

class Savings : public Account{
private:
    float m_intrRate;
public:
    Savings(const std::string &name, double balance, float intrRate);
    ~Savings();
    float getIntrRate()const;
    void accumilateInterest();
};

#endif /* savings_hpp */
