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


string Card::getCardID()
{
    return cardID;
}