//
//  main.cpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/15/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

#include "Student.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Math.hpp"
#include "MathCard.hpp"
#include "English.hpp"

using namespace std;

void chooseDeck();
int newDeck();

Student* user = new Student();

int main()
{
   
    char choice;
    cout << "HELLO,\n" << "WELCOME TO DJ's BRAND NEW FLASHCARD GAME!\n\n" << "Press enter to continue...\n\n\n\n\n\n\n";
    
    cin.ignore();
    
    cout << "Please select an option from the menu below:\n\n" << "a. Choose an existing deck to study\n" << "b. Create a new deck\n" << "enter Q to quit";
    
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
        case 'a':
            chooseDeck();
            break;
        case 'b':
            newDeck();
            break;
           
        case 'Q':
        case 'q':
            return 4;
            break;

    } while (choice != 'q' && choice != 'Q');

    return 0;
}

void chooseDeck()
{
    string deckName;
    cout << "\n\n\n\n\n\n\nPlease enter the name of the deck you would like to study: ";
    cin >> deckName;
    Deck* deck = user->getDeck(deckName);
    deck->study();
}

int newDeck()
{
    char kill;
    do {
        string deckName;
        cout << "please enter a name for your deck: ";
        cin >> deckName;
        user->createDeck(deckName);
        Deck* deck = user->getDeck(deckName);
        do {
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
    if (choice == 'S' && choice == 's')
    {
        chooseDeck();
    }
    else return 0;
}






