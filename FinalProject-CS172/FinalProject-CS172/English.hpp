//
//  English.hpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef English_hpp
#define English_hpp

#include <stdio.h>
#include <string>
#include "Card.hpp"
using namespace std;

class English : public Card {
public:
    //compare the input of the user with the back of the card
    bool compare(string input);
};

#endif /* English_hpp */
