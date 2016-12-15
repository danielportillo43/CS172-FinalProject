//
//  Deck.hpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

#include "Card.hpp"
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Student;
class Card;

class Deck {
    //subject for the deck of cards
    string subject;
    string deckFileName;
    
public:
    //vector of cards for the deck
    vector<Card*>cards;
    //constructor for the deck that passes in a filename
    Deck(string deck);
    //copy constructor
    ~Deck();
    Deck(Deck* deck);
    // get the subject for the deck
    string getSubject();
    
    string getDeckFileName();
    
    int getNumberOfCards();
    //shuffle the order of the cards int the vector cards
    void shuffle();
    //function that can find any card in the deck by its cardID
    Card* getCardWithId(int cardID);
    
    void addCard(string f, string b);
    
    
};

#endif /* Deck_hpp */
