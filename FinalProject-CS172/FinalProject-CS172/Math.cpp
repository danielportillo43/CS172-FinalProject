//
//  Math.cpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include <iostream>
#include <string>
#include "Math.hpp"
using namespace std;

void Math::add(){
    double n;
    double m;
    
    cout << "Input two numbers to be added: ";
    cin >> n;
    cout << ", ";
    cin >> m;
    cout << endl;
    
    std::string f = std::to_string(n) + "+" + std::to_string(m);
    std::string b = std::to_string(n+m);
    Card* c1 = new Card(f, b);
    mathCards.addCard(c1);
}
void Math::subtract(){
    double n;
    double m;
    
    cout << "Input two numbers to be subtracted: ";
    cin >> n;
    cout << ", ";
    cin >> m;
    cout << endl;
    
    std::string f = std::to_string(n) + "-" + std::to_string(m);
    std::string b = std::to_string(n-m);
    Card* c1 = new Card(f, b);
    mathCards.addCard(c1);
}

bool Math::compare(string input)
{
    if (input == getBack())
    {
        return true;
    }
    else
    {
        return false;
    }
}
