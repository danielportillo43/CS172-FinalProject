//
//  Deck.hpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class Student;
class Card;
class Deck {
    //subject for the deck of cards
    string subject;
    //vector of cards for the deck
    vector<Card>cards;
    
public:
    //no arg constructor for the deck
    Deck();
    //constructor that passes in the subject name for the deck
    Deck(string s);
    // get the subject for the deck
    string getSubject();
    //shuffle the order of the cards int the vector cards
    void shuffle();
};

#endif /* Deck_hpp */
