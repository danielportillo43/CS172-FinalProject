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

Card::Card(string f, string b)
{
    face = f;
    back = b;
}

int Card::getCardID()
{
    return cardID;
}
<<<<<<< HEAD

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
=======
<<<<<<< HEAD

string Card::getFace()
{
    return face;
}

string Card::getBack()
{
    return back;
}
=======
>>>>>>> 134e5b3871e977253c975b33e93df89ae7bd292d
>>>>>>> 62bd4711a0caa4ccd5c3e3d09cc6495c6237b75a
