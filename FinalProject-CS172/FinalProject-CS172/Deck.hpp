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
    string subject;
    vector<Card>cards;
    
public:
    Deck();
    Deck(string s);
    string getSubject();
    void shuffle();
};

#endif /* Deck_hpp */
