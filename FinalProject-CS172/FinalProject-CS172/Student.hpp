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
    string name;
    int reportCard;
    vector<Deck>decks;
    
public:
    Student();
    Student(string n);
    string getName();
    void setName(string n);
    void createDeck(int choice);
};

#endif /* Student_hpp */
