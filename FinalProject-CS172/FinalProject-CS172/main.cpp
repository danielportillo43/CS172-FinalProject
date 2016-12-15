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


Student* user = new Student();

int main()
{
   
    char choice;
    cout << "HELLO,\n" << "WELCOME TO DJ's BRAND NEW FLASHCARD TOOL!\n\n" << "Press enter to continue...\n\n\n\n\n\n\n";
    
    cin.ignore();
    user->newDeck();
    
        return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    

    
    
    
    




































    
    
    /*
    cout << "Please select an option from the menu below:\n\n" << "a. Choose an existing deck to study\n" << "b. Create a new deck\n" << "enter Q to quit\n\n";
    
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
        case 'a':
            user->chooseDeck();
            break;
        case 'b':
            user->newDeck();
            break;
           
        case 'Q':
        case 'q':
            return 4;
            break;

    } while (choice != 'q' && choice != 'Q');
*/






