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
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Deck;
class Card {
    //creates a number that will allow us to esily ID the card even if the vector is suffled
    string cardID;
    //variable that holds the input for the face of the card. the face should hold the questions
    string face;
    //variable that holds the input for the back of the card. the back should hold the answers
    string back;
    
public:
    //constructor that passes in the cardID
    Card(string ID);
    // copy constructor
    Card(Card* card);
    //constuctor passes in the face and the back of the card
    Card(string f, string b);
    
    string getCardID();
};

#endif /* Card_hpp */
