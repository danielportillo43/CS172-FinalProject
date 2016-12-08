//
//  Card.cpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "Card.hpp"

Card::Card(string ID)
{
    cardID = ID;
}

Card::Card(string f, string b)
{
    face = f;
    back = b;
}

string Card::getCardID()
{
    return cardID;
}

bool Card::compare(string input)
{
    if (input == face)
    {
        return true;
    }
    else
    {
        return false;
    }
}
