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
#include "Other.hpp"

using namespace std;

void returningUser();
void chooseDeck();
void newDeck();
void newUser();
void exit();


int main()
{
    int choice;
    cout << "HELLO,\n" << "WELCOME TO DJ's BRAND NEW FLASHCARD GAME!\n\n" << "Press enter to continue...\n\n\n\n\n\n\n";
    
    cin.ignore();
    
    cout << "Please select an option from the menu below:\n\n" << "1. returning user\n" << "2. new user\n" << "enter Q to quit\n\n\n\n\n\n\n";
    
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
        case '1':
            returningUser();
            break;
        case '2':
            newUser();
            break;
           
        case 'Q':
        case 'q':
            exit();
            break;

    } while (choice != 'q' && choice != 'Q');

    cout << "Please select an option from the menu below:\n\n" << "1. create a new deck\n" << "2. work from existing deck";

    return 0;
}

void returningUser()
{
    int choice;
    cout << "\n\n\n\n\n\n\nPlease select an option from the menu below:\n\n" << "1. choose from existing decks\n" << "2. create new deck\n" << "enter Q to quit\n\n\n\n\n\n\n";
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
        case '1':
            chooseDeck();
            break;
        case '2':
            newDeck();
            break;
            
        case 'Q':
        case 'q':
            exit();
            break;
            
    } while (choice != 'q' && choice != 'Q');
}

void chooseDeck()
{
    string deckName;
    cout << "\n\n\n\n\n\n\nPlease enter the name of the deck you would like to study: ";
    cin >> deckName;
}

