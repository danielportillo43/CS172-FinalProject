//
//  MathCard.cpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 12/8/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "MathCard.hpp"


bool MathCard::compare(string input)
{
    if (input == getBack())
    {
        reportCard++;
        return true;
    }
    else
    {
        return false;
    }
}
