//
//  Math.hpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Math_hpp
#define Math_hpp

#include <stdio.h>
#include "Deck.hpp"
#include "Card.hpp"

class Math {
    
    Deck mathCards;
    
public:
    //find a way to read in the face of the card and then do the appropriate calculations to auto create the answer (back) of the card
    void add();
    void subtract();
};

#endif /* Math_hpp*/