//
//  Card.hpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>

class Deck;
template <typename T>
class Card {
    int cardNumber;
    T face;
    T back;
    
public:
    Card(T f, T b);
};

#endif /* Card_hpp */
