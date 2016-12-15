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
#include "Names.hpp"

using namespace std;

void returningUser();
void chooseDeck();
void newDeck();
void newUser();

Student* user = new Student("User");

int main()
{
   
    char choice;
    cout << "HELLO,\n" << "WELCOME TO DJ's BRAND NEW FLASHCARD GAME!\n\n" << "Press enter to continue...\n\n\n\n\n\n\n";
    
    cin.ignore();
    
    cout << "Please select an option from the menu below:\n\n" << "a. returning user\n" << "b. new user\n" << "enter Q to quit\n\n\n\n\n\n\n";
    
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
        case 'a':
            returningUser();
            break;
        case 'b':
            newUser();
            break;
           
        case 'Q':
        case 'q':
            return 4;
            break;

    } while (choice != 'q' && choice != 'Q');

    cout << "Please select an option from the menu below:\n\n" << "a. create a new deck\n" << "b. work from existing deck";

    return 0;
}

void newUser()
{
    int check = 0;
    string username;
    do {
        cout << "Enter a username: ";
        cin >> username;
    //check if username is availible
        for (int i = 0; i < names.size(); i++)
        {
            if (username == names[i])
            {
                check = 1;
            }
        }
        if (check == 1)
        {
            cout << "username not availible please try another";
        }
    } while (check == 1);
    //Student* user = new Student(username);
    names.push_back(user->getStudentName());
    
    newDeck();
    
    //delete user;
    
    
}

void returningUser()
{
    int choice;
    string username;
    cout << "Enter your username: ";
    cin >> username;
    
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
            break;
            
    } while (choice != 'q' && choice != 'Q');
}

void chooseDeck()
{
    string deckName;
    cout << "\n\n\n\n\n\n\nPlease enter the name of the deck you would like to study: ";
    cin >> deckName;
    user->getDeck(deckName);

}

void newDeck()
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
}
