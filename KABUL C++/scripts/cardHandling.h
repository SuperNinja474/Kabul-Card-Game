#ifndef CARD_H
#define CARD_H
#include "raylib.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

//Card info
struct Card
{
    Texture2D texture;
    int value;
    char seed;
};

vector<Card> deck();

#endif