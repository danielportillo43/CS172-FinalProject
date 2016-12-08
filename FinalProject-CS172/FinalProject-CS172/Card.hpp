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
    int cardID;
    static int nextCardID;
    //variable that holds the input for the face of the card. the face should hold the questions
    string face;
    //variable that holds the input for the back of the card. the back should hold the answers
    string back;
    
public:
    //constructor that passes in the cardID
    Card(string f, string b);
    // copy constructor
    Card(Card* card);
<<<<<<< HEAD
    //constuctor passes in the face and the back of the card
    Card(string f, string b);
    
    string getCardID();
    
    virtual bool compare(string input);
=======
    //get functions
    int getCardID();
    string getFace();
    string getBack();  
>>>>>>> 62bd4711a0caa4ccd5c3e3d09cc6495c6237b75a
};

#endif /* Card_hpp */
