//
//  Card.cpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "Card.hpp"

int Card::nextCardID = 0;
Card::Card(string f, string b)
{
    cardID = nextCardID;
    nextCardID++;
    face = f;
    back = b;
}

int Card::getCardID()
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

string Card::getFace()
{
    return face;
}

string Card::getBack()
{
    return back;
}
