//
//  Deck.cpp
//  FinalProject-CS172
//
//  Created by Daniel Portillo on 11/17/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "Deck.hpp"

Deck::Deck(string deck)
{
    if ((deck.erase(deck.length() - 4)) == ".txt")
    {
        deckFileName = deck;
        subject = deck.erase(deck.length() - 4);
    }
    else
    {
        subject = deck;
        deckFileName = subject + ".txt";
    }
    string fileName = deckFileName;
    fstream file(fileName,ios::in | ios::app);
    string face;
    string back;
    if (!file.fail())
    {
        while (!file.eof())
        {
            if (file >> face >> back)
            {
                Card* card = NULL;
                card = new Card(face, back);
                cards.push_back(card);
            }
        }
    }
    file.close();
}

Deck::~Deck()
{
    string fileName = deckFileName;
    ofstream out(fileName);
    
    for (int i = 0; i < cards.size(); i++)
    {
        out << cards[i]->getFace() << cards[i]->getBack();
    }
    out.close();
    
    for (int i = 0; i < cards.size(); i++)
    {
        delete cards[i];
    }
}

Deck::Deck(Deck* deck)
{
    subject = deck->subject;
    deckFileName = deck->deckFileName;
}

string Deck::getSubject(){
    return subject;
}

string Deck::getDeckFileName(){
    return deckFileName;
}

int Deck::getNumberOfCards(){
    return cards.size();
}

void Deck::shuffle(){
    random_shuffle(cards.begin(), cards.end());
    
}

Card* Deck::getCardWithId(int cardID)
{
    for (int i = 0; i < cards.size(); i++)
    {
        if (cards[i]->getCardID() == cardID)
        {
            return cards[i];
        }
    }
    return cards[0];
}
void Deck::addCard(Card *card)
{
    cards.push_back(card);
}
