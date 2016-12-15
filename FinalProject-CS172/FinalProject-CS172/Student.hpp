//
//  Student.hpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include "Deck.hpp"
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Deck;

class Student {
    // vector that holds the users various decks
    vector<Deck*>decks;
    
    double reportCard;
public:
    //constructor that passes in the name of the user
    Student();
    //deconstructor
    ~Student();
    
    //get function for the users name
    string getStudentName();
    //set the users name
    void setName(string n);
    //return number of decks Student has
    int numberOfDecks();
    // create a new deck for the user. this should add the deck to the students decks vector
    void createDeck(string deck);
    //get for reportCard
    int getReportCard();
    
    Deck* getDeck(string name);
    
    void newDeck();
    
    void chooseDeck();
    
    void addDeck(Deck* deck);
};

#endif /* Student_hpp */
