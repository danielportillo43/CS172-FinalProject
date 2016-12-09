//
//  MathCard.hpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 12/8/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef MathCard_hpp
#define MathCard_hpp

#include <stdio.h>

#include "Card.hpp"
#include "Student.hpp"

class MathCard : public Card
{
    
public:
    virtual bool compare(string input);
    
};

#endif /* MathCard_hpp */
