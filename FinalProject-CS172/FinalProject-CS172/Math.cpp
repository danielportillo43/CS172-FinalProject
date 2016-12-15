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
    
    string f = to_string(n) + "+" + to_string(m);
    string b = to_string(n+m);
    mathCards.addCard(f,b);
}
void Math::subtract(){
    double n;
    double m;
    
    cout << "Input two numbers to be subtracted: ";
    cin >> n;
    cout << ", ";
    cin >> m;
    cout << endl;
    
    string f = to_string(n) + "-" + to_string(m);
    string b = to_string(n-m);
    mathCards.addCard(f,b);
}
/*
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
*/