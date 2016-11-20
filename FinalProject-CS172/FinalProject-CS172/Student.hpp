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
using namespace std;

class Deck;
class Student {
    //the users name
    string name;
    //a grade based on the total answers right / total answers
    int reportCard;
    // vector that holds the users various decks
    vector<Deck>decks;
    
public:
    //no arg constructor
    Student();
    //constructor that passes in the name of the user
    Student(string n);
    //get function for the users name
    string getName();
    //set the users name
    void setName(string n);
    // create a new deck for the user. this should add the deck to the students decks vector
    void createDeck(int choice);
};

#endif /* Student_hpp */
