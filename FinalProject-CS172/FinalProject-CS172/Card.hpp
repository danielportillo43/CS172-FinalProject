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
    //creates a number that will allow us to esily ID the card even if the vector is suffled
    int cardID;
    //variable that holds the input for the face of the card. the face should hold the questions
    T face;
    //variable that holds the input for the back of the card. the back should hold the answers
    T back;
    
public:
    //no arg constructor
    Card();
    //constuctor passes in the face and the back of the card
    Card(T f, T b);
};

#endif /* Card_hpp */
