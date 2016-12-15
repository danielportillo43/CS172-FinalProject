//
//  Student.cpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "Student.hpp"

//Creates a new Student with the given name
Student::Student()
{
    string fileName = "student.txt";
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

//This is the destructor for the student.  When
//this student is destroyed, save the flienames of
//the decks to a file so that you can restore
//it in the constructor the next time that
//a student with this name is created.
Student::~Student()
{
    string fileName = "student.txt";
    ofstream out(fileName);
    
    for (int i = 0; i < decks.size(); i++)
    {
        out << decks[i]->getDeckFileName() << " " << decks[i]->getDeckFileName() << " ";
    }
    out.close();
    
    for (int i = 0; i < decks.size(); i++)
    {
        delete decks[i];
    }
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
    string deckName = name;
    for (int i = 0; i < decks.size(); i++)
    {
        if (decks[i]->getSubject() == deckName)
        {
            return decks[i];
        }
    }
    return decks[0];
}

void Student::newDeck()
{
    char kill;
    do {
        string deckName;
        cout << "please enter a name for your deck: ";
        cin >> deckName;
        createDeck(deckName);
        do {
            Deck* deck = NULL;
            deck = getDeck(deckName);
            addDeck(deck);
            string face;
            string back;
            cout << "what do you want the front of your flashcard to say: ";
            cin >> face;
            cout << "\n\n\n\n\n\n\nwhat do you want the back of your flashcard to say: ";
            cin >> back;
            deck->addCard(face, back);
            cout << "\n\n\n\n\n\n\nto stop entry press Q. Or any other key to enter another card: ";
            kill = NULL;
            cin >> kill;
        } while (kill != 'Q' && kill != 'q');
        cout << "\n\n\n\n\n\n\nto stop entry press Q. Or any other key to enter another deck: ";
        kill = NULL;
        cin >> kill;
    } while (kill != 'Q' && kill != 'q');
    
    
    
    char choice = NULL;
    cout << "\n\n\n\n\n\n\nTo study one of your new decks enter 'S'\n";
    cout << "Or enter any other key to quit: ";
    cin >> choice;
    if (choice == 'S' || choice == 's')
    {
        chooseDeck();
    }
    
}

void Student::chooseDeck()
{
    double score;
    string deckName;
    cout << "\n\n\n\n\n\n\nPlease enter the name of the deck you would like to study: ";
    cin >> deckName;
    Deck* chosenDeck = NULL;
    chosenDeck = getDeck(deckName);
    score = chosenDeck->study();
    delete chosenDeck;
    cout << score;
    
}

void Student::addDeck(Deck* deck)
{
    decks.push_back(deck);
}




