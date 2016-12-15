//
//  Student.cpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "Student.hpp"

//Creates a new Student with the given name
Student::Student(string n)
{
    name = n;
    names.push_back(name);
    string fileName = name + ".txt";
    fstream file(fileName, ios::in | ios::app);//open or create the student file
    //placeholders for use in deckFileName transfer from .txt file to the deckFileName vector for the Student object and the students report card
    string deckFileName;
    if (!file.fail())
    {
        while (!file.eof()) {
            if(file >> deckFileName)
            {
                Deck* deck = NULL;
                deck = new Deck(deckFileName);
                decks.push_back(deck);
            }
        }
    }
    file.close();
}

//This is the destructor for the city.  When
//this city is destroyed, save the population of
//the city to a file so that you can restore
//it in the constructor the next time that
//a city with this name is created.
Student::~Student()
{
    string fileName = name + ".txt";
    ofstream out(fileName);
    
    for (int i = 0; i < decks.size(); i++)
    {
        out << decks[i]->getDeckFileName() << " ";
    }
    out.close();
    
    for (int i = 0; i < decks.size(); i++) {
        delete decks[i];
    }
}

//Returns the city name
string Student::getStudentName()
{
    return name;
}

void Student::setName(string n)
{
    name = n;
}

int Student::numberOfDecks()
{
    return decks.size();
}

void Student::createDeck(string deck)
{
    Deck* copy = new Deck(deck);
    decks.push_back(copy);
}

Deck* Student::getDeck(string name)
{
    string fileName = name + ".txt";
    for (int i = 0; i < decks.size(); i++)
    {
        if (decks[i]->getDeckFileName() == fileName)
        {
            return decks[i];
        }
    }
    return decks[0];
}






